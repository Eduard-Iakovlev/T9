#include <iostream>
#include "Windows.h"
#include "Dictionary.h"
#include "Input_text.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	

	Dictionary_liter* dictionary = get_new_liter();
	std::vector<std::string> words {"������", "��������", "�����", "����", "�������", "������", "����", "����", "�������", "����������", "���", "����", "������", "����������", "�������", "������", "������", "����", "�����"};
	// ��������� ����� � �������
	for (int i = 0; i < words.size(); i++) insert(dictionary, words[i]);

	std::string d = "���";
	std::string dd{};
	std::vector<std::string> s{};

	find_suffixes(dictionary, d, s, "");
	for (int i = 0; i < s.size(); i++) std::cout << s[i] << " ";
}