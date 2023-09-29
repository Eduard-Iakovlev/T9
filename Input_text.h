#pragma once
#include "Dictionary.h"
#include <conio.h>
#include <string>
#include <iostream>
#include <vector>


class Text {
public:
	Text(char first_simbol, char last_simbol);
	int chois(int);
	std::string input(Dictionary_liter*);
private:
	char _first_simbol{};
	char _last_simbol{};
	const char _back_space{ 8 };
	const char _enter{ 13 };
	const char _space{ 32 };
	char _str[256]{};
	int _counter{ 0 };
	std::vector<std::string> _suffixes{};
	
};