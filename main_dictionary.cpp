#include <iostream>
#include "Windows.h"
#include "Dictionary.h"
#include "Input_text.h"
#include "Function.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	

	Dictionary_liter* dictionary = get_new_liter();
	std::vector<std::string> words {"привет", "приправа", "прима", "пока", "сегодня", "завтра", "Анна", "Иван", "спасибо", "пожалуйста", "как", "дела", "погода", "настроение", "настрой", "доброе", "добрый", "утро", "вечер"};
	// вставляем слова в словарь
	for (int i = 0; i < words.size(); i++) insert(dictionary, words[i]);

	Text text(a, z);
	int counter{ 0 };
	std::vector<std::string> str{};

	while (true) {
		printing(str);
		str.push_back(text.input(dictionary, str));
		if (str[str.size() - 1] == "ь") break; // требует доработки на безопасность кода
		if (!search(dictionary, str[counter])) insert(dictionary, str[counter]);
		counter++;
	}

	system("cls");
	std::cout << "\n\n\n\n\n               Всего хорошего!";
	
	
}