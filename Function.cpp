#include "Function.h"

// function print

void printing(std::vector < std::string>& str)
{
	system("cls");
	std::cout << " Начинайте вводить текст на Русском языке, для выхода нажмите \"ESC\"\n";
	std::cout << " Если Вы набираете новое слово и ошиблись, воспользуйтесь клавишей back-spase.\n";
	std::cout << " Регистр имеет значение, новые слова автоматически добавляются в словарь.\n";
	std::cout << " Знаки препинания пока не предусмотрены.\n\n";
	for (int i = 0; i < str.size(); i++) std::cout << str[i] << " ";

}
