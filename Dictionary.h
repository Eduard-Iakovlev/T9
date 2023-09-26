#pragma once
#include <string>

const int size_alphabet{ 33 };

// структура словаря
struct Dictionary_liter {
	struct Dictionary_liter* child[size_alphabet];
	bool end_word;
};

Dictionary_liter* get_new_liter(void);
