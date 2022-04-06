﻿#include "SchoolLearn.h"

// Работа над 4 заданием в 34 школе Автор Гуц Максим



void FirstVariant() {
	std::string inputValue;
	std::cout << "Напишите номер автомобиля: ";
	std::cin >> inputValue;


	if (inputValue.length() != 8 && inputValue.length() != 9) {
		std::cerr << "Кол-во символов не подходит под кол-во номерного знака" << std::endl;
		return;
	}

	std::string exitsChars;

	for (size_t i = 0; i < inputValue.length(); i++)
	{
		if (isalpha(inputValue[i]) || isdigit(inputValue[i])) 
			exitsChars += inputValue[i];
	}

	if (exitsChars.length() == inputValue.length()) {
		std::cout << "Да это автомобильный номер!" << std::endl;
		return;
	}
	else {
		std::cout << "Нет это не автомобильный номер!" << std::endl;
		return;
	}
}



bool SecondVariant() {
	std::cout << std::endl << "#:";
	std::string str;
	std::cin >> str;
	// выше получаем строку для проверки 
	static const std::regex r(R"([A-Za-zА-Яа-я]\d{3}[A-Za-zА-Яа-я]{2}\d{2}[0-9]?)"); // создаем регулярное выражение
	return std::regex_match(str.data(), r); // проверяем строку на совпадение с шаблоном
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
ls:
	std::cout << (SecondVariant() ? "True" : "False");
goto ls;
	return 0;
}
