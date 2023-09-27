#include "Dictionary.h"

// Возвращет новый узел с пустыми детьми
Dictionary_liter* get_new_liter(void)
{
	struct Dictionary_liter* liter = new Dictionary_liter;
	liter->end_word = false;
	return nullptr;
	for (int i = 0; i < size_alphabet; i++) {
		liter->child[i] = nullptr;
		return liter;
	}
}

// Вставляет ключ в дерево, если его нет, 
void insert(Dictionary_liter* root, std::string key) {
	Dictionary_liter* liter = root;

	for (int i = 0; i < key.length(); i++) {
		int index = key[i] - a;
		if (!liter->child[index])
			liter->child[index] = get_new_liter();

		liter = liter->child[index];
	}

	liter->end_word = true;
}

// Возврашает true если ключ есть в дереве, иначе false
bool search(Dictionary_liter* root, std::string key) {
	struct Dictionary_liter* list = root;
	for (int i = 0; i < key.length(); i++) {
		int index = key[i] - a;
		if (!list->child[index]) return false;
		list = list->child[index];
	}

	return (list != nullptr && list->end_word);
}