﻿#include <iostream>
#include "Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	std::cout << std::endl;

	std::string nameOfPerson;

	std::cout << "Введите имя: ";
	std::cin >> nameOfPerson;

	Leaver::Leaver person1;

	std::cout << person1.leave(nameOfPerson) << std::endl;

}