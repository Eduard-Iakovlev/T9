#include <iostream>
#include "Windows.h"
#include "Dictionary.h"
#include "Input_text.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	

	Dictionary_liter* dictionary = get_new_liter();
	std::vector<std::string> words {"������", "����", "�������", "������", "����", "����", "�������", "����������", "���", "����", "������", "����������", "�������", "������", "������", "����", "�����"};
	//int lenght_words = sizeof(words) / sizeof(words[0]);

	// ��������� ����� � �������
	for (int i = 0; i < words.size(); i++) insert(dictionary, words[i]);

	Text text(a, z);
}