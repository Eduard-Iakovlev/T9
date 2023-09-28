#pragma once
#include <conio.h>
#include <string>
#include <iostream>

class Text {
public:
	Text(char first_simbol, char last_simbol);
	std::string input();
private:
	char _first_simbol{};
	char _last_simbol{};
	const char _back_space{ 8 };
	const char _enter{ 13 };
	const char _space{ 32 };
	char _str[256]{};
	int _counter{ 0 };
};