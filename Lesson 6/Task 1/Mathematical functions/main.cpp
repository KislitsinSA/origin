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

	cout << "\n ������� ������ ����� : ";
	cin >> num1;
	cout << "\n ������� ������ ����� : ";
	cin >> num2;

	do
	{
		cout << "\n �������� ��������(1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������) : ";
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
		case 5: cout << num1 << "  � ������� " << num2 << " = " << exponentiation(num1, num2);
			break;
		}

	} while (true);

	return 0;
}