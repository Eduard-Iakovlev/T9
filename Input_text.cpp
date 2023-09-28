#include "Input_text.h"

Text::Text(char first_simbol, char last_simbol) : _first_simbol{ first_simbol }, _last_simbol{ last_simbol } {}

std::string Text::input()
{
	while (true) {
		_str[_counter] = _getch();

		if (_str[_counter] >= _first_simbol && _str[_counter] <= _last_simbol) {
			std::cout << _str[_counter];
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

