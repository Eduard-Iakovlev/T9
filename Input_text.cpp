#include "Input_text.h"

Text::Text(char first_simbol, char last_simbol)
	: _first_simbol{ first_simbol }, _last_simbol{ last_simbol } {}

std::string Text::input(Dictionary_liter* root)
{
		std::string temp_str{};
		std::string temp_currentSuffix{};
	while (true) {
		_str[_counter] = _getch();

		if (_str[_counter] >= _first_simbol && _str[_counter] <= _last_simbol) {
			std::cout << _str[_counter];
			temp_str = std::string(_str);
			find_suffixes(root, temp_str, _suffixes, "");
			std::cout << "\n 0 - продолжить самостоятельно ";
			for (int i = 0; i < _suffixes.size(); i++) {
				std::cout << i+1 << " - " << _suffixes[i] << " ";
			}
			_counter++;
		}
		else if (_str[_counter] == _back_space) {
			if (_counter == 0) continue;
			else {
				std::cout << "\b" << " " << "\b";
				_counter--;
			}
		}
		else if (_str[_counter] == _enter || _str[_counter] == _space) {
			if (_str[0] == _enter) continue;
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

	return std::string(_str);
}

int Text::chois(int lenght)
{
	int select{ 0 };
	std::cout << " выберите действиеЖ: ";
	while (true) {
		std::cin >> select;
		if (select < 0 || select > lenght + 1) {
			std::cout << " Не корректный выбор, повторите: ";
		}
		else break;
	}

	return select;
}

