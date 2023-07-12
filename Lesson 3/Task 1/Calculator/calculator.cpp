#include<iostream>
#include<Windows.h>


using namespace std;

class Calculator 
{
	private:
		double num1;
		double num2;

	public:
		double add() {
			return num1 + num2;
		};
		double multiply(){
			return num1 * num2;
		};
		double subtract_1_2(){
			return num1 - num2;
		};
		double subtract_2_1(){
			return num2 - num1;
		}
		double divide_1_2(){
			return num1 / num2;
		}
		double divide_2_1(){
			return num2 / num1; 
		}
		bool set_num1(double num1)
		{
<<<<<<< HEAD
			cout << "Введите num1 : ";
=======
			cout << "Р’РІРµРґРёС‚Рµ num1 : ";
>>>>>>> c5bfa431c558983083caa5f05bddbcf586a380f7
			cin >> num1;
			cout << "\n";

			if (num1 == 0) {
				set_num1(num1);
			}else {
				this->num1 = num1;
				return true;
			}
		};
		bool set_num2(double num2)
		{	
<<<<<<< HEAD
			cout << "Введите num2 : ";
=======
			cout << "Р’РІРµРґРёС‚Рµ num2 : ";
>>>>>>> c5bfa431c558983083caa5f05bddbcf586a380f7
			cin >> num2;
			cout << "\n";

			if (num2 == 0){
				set_num2(num2);
			}else{
				this->num2 = num2;
				return true;
			}
		};
};

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double num1 = 0, num2 = 0;

	Calculator operations;
	
	do
	{
		operations.set_num1(num1);

		operations.set_num2(num2);

		cout << "num1 + num2 = " << operations.add() << "\n";

		cout << "num1 - num2 = " << operations.subtract_1_2() << "\n";

		cout << "num2 - num1 = " << operations.subtract_2_1() << "\n";

		cout << "num1 * num2 = " << operations.multiply() << "\n";
		
		cout << "num1 / num2 = " << operations.divide_1_2() << "\n";
		
		cout << "num2 / num1 = " << operations.divide_2_1() << "\n";

	}while (true);

	return 0;
}

