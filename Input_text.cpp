#include "Input_text.h"
#include "Function.h"

Text::Text(char first_simbol, char last_simbol)
	: _first_simbol{ first_simbol }, _last_simbol{ last_simbol } {}

std::string Text::input(Dictionary_liter* root, std::vector<std::string>& str)
{
	for (int i = 0; i < 33; i++) _str[i] = '\0';
	_counter = 0;
	_suffixes.clear();
	select = 0;
	
	while (true) {
		_str[_counter] = _getch();

		if (_str[_counter] >= _first_simbol && _str[_counter] <= _last_simbol) {
			std::cout << _str[_counter];
			find_suffixes(root, _str, _suffixes, "");
			if (_suffixes.size() > 0) { 
				std::cout << "\n 0 - продолжить самостоятельно\n";
				for (int i = 0; i < _suffixes.size(); i++) {
					std::cout << i + 1 << " - " << _suffixes[i] << " ";
				}
				select = chois(_suffixes.size())-1;
				if (select == -1) {
					_suffixes.clear();
					printing(str);
					for (int i = 0; i <= _counter; i++) std::cout << _str[i];
					_counter++;
					continue;
				}
				return _suffixes[select];
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
		else if (_str[_counter] == _esc) {
			_str[0] = 'ь';
			_str[1] = '\0';
			break;
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
	select = 0;
	std::cout << "\n выберите действие: ";
	while (true) {
		std::cin >> select;
		if (std::cin.fail()) {
			std::cout << " нужно ввести номер из предложенных вариантов: ";
			select = 0;
			continue;
		}
		else if (select > lenght) {
			std::cout << " выбирете из предложенных значений: ";
			select = 0;
			continue;
		}
		else break;
	}
	return select;
}

