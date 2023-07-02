#include<iostream>

using namespace std;

class Calculator 
{
	public:
		double num1;
		double num2;

		double add(double num1, double num2) 
		{
			double result = 0;
			result = num1 + num2;
			return result;
		};
		double multiply(double num1, double num2)
		{
			double result = 0;
			result = num1 * num2;
			return result;
		};
		double subtract_1_2(double num1, double num2)
		{
			double result = 0;
			result = num1 - num2;
			return result;
		};
		double subtract_2_1(double num1, double num2)
		{
			double result = 0;
			result = num2 - num1;
			return result;
		};
		double divide_1_2(double num1, double num2)
		{
			double result = 0;;
			result = num1 / num2;
			return result;
		};
		double divide_2_1(double num1, double num2)
		{
			double result = 0;
			result = num2 / num1;
			return result;
		};
		bool set_num1(double num1)
		{
			if (!num1)
			{
				cout << "Неверный ввод!" << "\n";
				cout << "Введите num1 : ";
				cin >> num1;
				cout << "\n";
			}
			else this ->num1 = num1;

			return 1;
		};
		bool set_num2(double num2)
		{
			if (!num2)
			{
				cout << "Неверный ввод!" << "\n";
				cout << "Введите num2 : ";
				cin >> num2;
				cout << "\n";
			}
			else this->num2 = num2;

			return 1;
		};
};

int main()
{	
	setlocale(LC_ALL, "Russian");
	double num1 = 0, num2 = 0, result = 0;
	Calculator operations;
	
	do
	{
		cout << "Введите num1 : ";
		cin >> num1;
		cout << "\n";
		result = operations.set_num1(num1);

		cout << "Введите num2 : ";
		cin >> num2;
		cout << "\n";
		result = operations.set_num2(num2);

		result = operations.add(num1, num2);
		cout << "num1 + num2 = " << result << "\n";

		result = operations.subtract_1_2(num1, num2);
		cout << "num1 - num2 = " << result << "\n";

		result = operations.subtract_2_1(num1, num2);
		cout << "num2 - num1 = " << result << "\n";

		result = operations.multiply(num1, num2);
		cout << "num1 * num2 = " << result << "\n";
		
		result = operations.divide_1_2(num1, num2);
		cout << "num1 / num2 = " << result << "\n";
		
		result = operations.divide_2_1(num1,num2);
		cout << "num2 / num1 = " << result << "\n";

	}while (true);

	return 0;
}

