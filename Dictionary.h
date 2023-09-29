#pragma once
#include <iostream>
#include <string>
#include <vector>


const int ALPHABET_SIZE{ 66 };
const char a = '�'; // ������� �
const char z = '�';

// ��������� �������
struct Dictionary_liter {
	struct Dictionary_liter* child[ALPHABET_SIZE];
	bool end_word;
};

Dictionary_liter* get_new_liter(void);
void insert(Dictionary_liter*, std::string);
bool search(Dictionary_liter*, std::string);
std::vector<std::string> find_suffixes(Dictionary_liter*, std::string, std::string);