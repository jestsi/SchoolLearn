#include "SchoolLearn.h"

// Работа над 4 задание в 34 школы Автор Гуц Максим

int main()
{
	std::string inputValue;
	std::cout << "Напишите номер автомобиля: ";
	std::cin >> inputValue;

	setlocale(LC_ALL, "ru");

	if (inputValue.length() != 8 && inputValue.length() != 9) {
		std::cerr << "Кол-во символов не подходит под кол-во номерного знака" << std::endl;
		return 1;
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
		return 0;
	}
	else {
		std::cout << "Нет это не автомобильный номер!" << std::endl;
		return 0;
	}


	return 0;
}
