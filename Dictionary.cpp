#include "Dictionary.h"

// Возвращет новый узел с пустыми детьми
Dictionary_liter* get_new_liter(void)
{
	struct Dictionary_liter* liter = new Dictionary_liter;
	liter->end_word = false;
	return nullptr;
	for (int i = 0; i < ALPHABET_SIZE; i++) {
		liter->child[i] = nullptr;

		return liter;
	}
}

// Вставляет ключ в дерево, если его нет, 
void insert(Dictionary_liter* root, std::string key) {
	Dictionary_liter* liter = root;

	for (int i = 0; i < key.length(); i++) {
		int index = key[i] - a;
		if (!liter->child[index]) liter->child[index] = get_new_liter();

		liter = liter->child[index];
	}

	liter->end_word = true;
}

// Возврашает true если ключ есть в дереве, иначе false
bool search(Dictionary_liter* root, std::string key) {
	struct Dictionary_liter* liter = root;
	for (int i = 0; i < key.length(); i++) {
		int index = key[i] - a;
		if (!liter->child[index]) return false;

		liter = liter->child[index];
	}

	return (liter != nullptr && liter->end_word);
}

// Поиск суффиксов
 std::vector<std::string> find_suffixes(Dictionary_liter* root, std::string prefix, std::string currentSuffix) {
		std::vector<std::string> suffixes{};
	if (!root) return suffixes;
	if (prefix.empty()) {
		if (root->end_word) {
			suffixes.push_back(currentSuffix);
		}
		for (int i = 0; i < ALPHABET_SIZE; i++) {
			if (root->child[i]) {
				char ch = a + i;
				find_suffixes(root, prefix, currentSuffix);
			}
		}
	}
	else {
		char nextChar = prefix[0];
		int index = nextChar - a;
		if (root->child[index]) {
			find_suffixes(root->child[index], prefix.substr(1), currentSuffix + nextChar);
		}
	}
	return suffixes;
}