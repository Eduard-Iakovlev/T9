#include "Function.h"

// function print

void printing(std::vector < std::string>& str)
{
	system("cls");
	std::cout << " ��������� ������� ����� �� ������� �����, ��� ������ ������� \"ESC\"\n";
	std::cout << " ���� �� ��������� ����� ����� � ��������, �������������� �������� back-spase.\n";
	std::cout << " ������� ����� ��������, ����� ����� ������������� ����������� � �������.\n";
	std::cout << " ����� ���������� ���� �� �������������.\n\n";
	for (int i = 0; i < str.size(); i++) std::cout << str[i] << " ";

}
