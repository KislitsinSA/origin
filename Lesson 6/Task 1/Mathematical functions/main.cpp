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

	cout << "\n Ââĺäčňĺ ďĺđâîĺ ÷čńëî : ";
	cin >> num1;
	cout << "\n Ââĺäčňĺ âňîđîĺ ÷čńëî : ";
	cin >> num2;

	do
	{
		cout << "\n Âűáĺđčňĺ îďĺđŕöčţ(1 - ńëîćĺíčĺ, 2 âű÷čňŕíčĺ, 3 - óěíîćĺíčĺ, 4 - äĺëĺíčĺ, 5 - âîçâĺäĺíčĺ â ńňĺďĺíü) : ";
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
		case 5: cout << num1 << "  â ńňĺďĺíč " << num2 << " = " << exponentiation(num1, num2);
			break;
		}

	} while (true);

	return 0;
}
