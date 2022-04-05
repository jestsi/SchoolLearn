#include "SchoolLearn.h"

// Работа над 4 задание в 34 школы Автор Гуц Максим

void FirstVariant() {
	std::string inputValue;
	std::cout << "Напишите номер автомобиля: ";
	std::cin >> inputValue;

	setlocale(LC_ALL, "ru");

	if (inputValue.length() != 8 && inputValue.length() != 9) {
		std::cerr << "Кол-во символов не подходит под кол-во номерного знака" << std::endl;
		return;
	}

	std::string alhpaChars, digitChars;

	for (size_t i = 0; i < inputValue.length(); i++)
	{
		if (isalpha(inputValue[i])) {
			alhpaChars += inputValue[i];
			continue;
		}
		if (isdigit(inputValue[i])) {
			alhpaChars += inputValue[i];
			continue;
		}
	}

	if (alhpaChars.length() + digitChars.length() == inputValue.length()) {
		std::cout << "Да это автомобильный номер!" << std::endl;
		return;
	}
	else {
		std::cout << "Нет это не автомобильный номер!" << std::endl;
		return;
	}
}

#include <regex>

bool SecondVariant(std::string str) {
	static const std::regex r(R"([0-9]?[a-z|A-Z]{3}[0-9]?[0-9])"); // ([0-9]?[a-z|A-Z]?[a-z|A-Z]?[a-z|A-Z]?[0-9]?[0-9])
	return std::regex_match(str.data(), r);
}

int main()
{
	ln:
	std::string test;
	std::cin >> test;
	
	std::cout << (bool)SecondVariant(test);
	goto ln;

	return 0;
}
