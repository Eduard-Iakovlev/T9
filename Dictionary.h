#pragma once
#include <iostream>
#include <string>
#include <vector>


const int ALPHABET_SIZE{ 66 };
const char a = 'А'; // русская а
const char z = 'я';

// структура словаря
struct Dictionary_liter {
	struct Dictionary_liter* child[ALPHABET_SIZE];
	bool end_word;
};

Dictionary_liter* get_new_liter(void);
void insert(Dictionary_liter*, std::string);
bool search(Dictionary_liter*, std::string);
void find_suffixes(Dictionary_liter* root, std::string prefix,
	std::vector<std::string>& suffixes, std::string currentSuffix);