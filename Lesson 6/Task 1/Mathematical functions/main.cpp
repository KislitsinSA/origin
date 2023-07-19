#include<iostream>
#include"main.h"

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251 > nul");

	auto num1{ 0 };
	auto num2{ 0 };
	int choice{ 0 };

	cout << "\n ¬ведите первое число : ";
	cin >> num1;
	cout << "\n ¬ведите второе число : ";
	cin >> num2;

	do
	{
		cout << "\n ¬ыберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
		cin >> choice;

		switch (choice)
		{
		case 1: cout << num1 << " + " << num2 << " = " << add(num1, num2);
			break;
		case 2: cout << num1 << " - " << num2 << " = " << subtract(num1, num2);
			break;
		case 3: cout << num1 << " * " << num2 << " = " << multiply(num1, num2);
			break;
		case 4: cout << num1 << " / " << num2 << " = " << divide(num1, num2);
			break;
		case 5: cout << num1 << "  в степени " << num2 << " = " << exponentiation(num1, num2);
			break;
		}

	} while (true);

	return 0;
}