#include <iostream>
#include "Dictionary.h"

int main() {

	std::string words[] = {"атлас", "привет", "как", "какой", "каким", "пока", "человек", "абстакционизм", "абстракци€"};
	int lenght_words = sizeof(words) / sizeof(words[0]);

	Dictionary_liter* dictionary = get_new_liter();
	// вставл€ем слова в словарь
	for (int i = 0; i < lenght_words; i++) insert(dictionary, words[i]);
}