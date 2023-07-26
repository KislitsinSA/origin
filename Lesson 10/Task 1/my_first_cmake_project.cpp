#include<iostream>
#include<string>

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	std::string Name;

	std::cout << "Введите имя: ";
	std::getline(std::cin >> std::ws, Name);
	std::cout << std::endl << "Здравствуйте, " << Name << std::endl;

	return 0;
}