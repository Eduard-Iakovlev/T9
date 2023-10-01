#include "Input_text.h"

Text::Text(char first_simbol, char last_simbol)
	: _first_simbol{ first_simbol }, _last_simbol{ last_simbol } {}

std::string Text::input(Dictionary_liter* root)
{
	for (int i = 0; i < 33; i++) _str[i] = '\0';
	
	while (true) {
		_str[_counter] = _getch();

		if (_str[_counter] >= _first_simbol && _str[_counter] <= _last_simbol) {
			std::cout << _str[_counter];
			find_suffixes(root, _str, _suffixes, "");
			if (_suffixes.size() > 0) { // нужно определять суффикс
				std::cout << "\n 0 - продолжить самостоятельно\n";
				for (int i = 0; i < _suffixes.size(); i++) {
					std::cout << i + 1 << " - " << _suffixes[i] << " ";
				}
				select = chois(_suffixes.size());
				// реализовать действия на основе выбора
				break;
			}
			else{
				_counter++;
				continue;
			}
		}
		if (_str[_counter] == _back_space) {
			if (_counter == 0) continue;
			else {
				std::cout << "\b" << " " << "\b";
				_counter--;
			}
		}
		else if (_str[_counter] == _enter || _str[_counter] == _space) {
			if (_str[0] == _enter || _str[0] == _space) continue;
			else {
				_str[_counter] = '\0';
				break;
			}
		}
		else {
			_str[_counter] = '\0';
			std::cout << " " << "\b";
		}
	}
	_counter = 0;
	_suffixes.clear();
	return std::string(_str);
}

int Text::chois(int lenght)
{
	int select{ 0 };
	std::cout << "\n выберите действие: ";
	while (true) {
		std::cin >> select;
		if (select < 0 || select > lenght) {
			std::cout << " Не корректный выбор, повторите: ";
		}
		else break;
	}

	return select;
}

