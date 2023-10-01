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

	Text text(a, z);
	int counter{ 0 };
	std::vector<std::string> str{};

	while (true) {
		str.push_back(text.input(dictionary));
		if (!search(dictionary, str[counter])) insert(dictionary, str[counter]);
		counter++;
		system("cls");
		for (int i = 0; i < str.size(); i++) std::cout << str[i] << " ";
	}
	
	
}