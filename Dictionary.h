#pragma once
#include <string>


const int size_alphabet{ 33 };
const char a = '�'; // ������� �
const char z = '�';

// ��������� �������
struct Dictionary_liter {
	struct Dictionary_liter* child[size_alphabet];
	bool end_word;
};

Dictionary_liter* get_new_liter(void);
void insert(Dictionary_liter*, std::string);
bool search(Dictionary_liter*, std::string);