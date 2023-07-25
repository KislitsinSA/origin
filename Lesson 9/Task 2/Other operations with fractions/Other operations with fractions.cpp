#include <iostream>

using namespace std;

class Fraction
{
private:
	int num{ 0 };
	int denom{ 0 };

	//����������� ������ �������� ������

	int gcd_foo(int num, int denom) 
	{
		num = abs(num);
		denom = abs(denom);

		while (num > 0 && denom > 0) {
			if (num > denom){
				num %= denom;
			}else{
				denom %= num;}
		}
		return num + denom;
	}

public:
	Fraction() = default;
	Fraction(int FracNum, int FracDenom)
	{
		num = FracNum;
		denom = FracDenom;
	}

	//��������

	Fraction operator+ (const Fraction& f2) 
	{
		Fraction temp;
		temp.num = ((this->num * f2.denom) + (f2.num * this->denom));
		temp.denom = (this->denom * f2.denom);
		int gcd = gcd_foo(temp.num, temp.denom);
		temp.num /= gcd;
		temp.denom /= gcd;

		return temp;
	}

	//���������

	Fraction operator- (const Fraction& f2) 
	{
		Fraction temp;
		temp.num = ((this->num * f2.denom) - (f2.num * this->denom));
		temp.denom = (this->denom * f2.denom);
		int gcd = gcd_foo(temp.num, temp.denom);
		temp.num /= gcd;
		temp.denom /= gcd;

		return temp;
	}

	//���������

	Fraction operator* (const Fraction& f2) 
	{
		Fraction temp;

		temp.num = this->num * f2.num;
		temp.denom = this->denom * f2.denom;
		int gcd = gcd_foo(temp.num, temp.denom);
		temp.num /= gcd;
		temp.denom /= gcd;
		return temp;
	}

	//�������

	Fraction operator/ (const Fraction& f2) 
	{
		Fraction temp;
		temp.num = this->num * f2.denom;
		temp.denom = this->denom * f2.num;
		int gcd = gcd_foo(temp.num, temp.denom);
		temp.num /= gcd;
		temp.denom /= gcd;
		return temp;
	}

	//��������� ����������

	Fraction operator++ ()  
	{
		Fraction temp = *this;
		this->num += this->denom;
		int gcd = gcd_foo(this->num, this->denom);
		this->num /= gcd;
		this->denom /= gcd;

		return temp;
	}

	//��������� �����������

	Fraction operator-- (int)  
	{
		Fraction temp = *this;
		this->num -= this->denom;
		int gcd = gcd_foo(this->num, this->denom);
		this->num /= gcd;
		this->denom /= gcd;

		return temp;
	}

	friend ostream& operator<< (ostream& left, const Fraction& f);
};

	ostream& operator<< (ostream& left, const Fraction& f)
{
		if (f.denom == 1) {
			left << f.num;
		}else{
			left << f.num << "/" << f.denom;}
		return left;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	int numf1{ 3 };
	int denomf1{ 4 };
	int numf2{ 4 };
	int denomf2{ 5 };

	cout << "������� ��������� ����� 1: ";
	cin >> numf1;
	cout << "������� ����������� ����� 1: ";
	cin >> denomf1;

	cout << "������� ��������� ����� 2: ";
	cin >> numf2;
	cout << "������� ����������� ����� 2: ";
	cin >> denomf2;

	Fraction f1(numf1, denomf1);
	Fraction f2(numf2, denomf2);

	cout << f1 << " + " << f2 << " = " << f1 + f2 << endl;
	cout << f1 << " - " << f2 << " = " << f1 - f2 << endl;
	cout << f1 << " * " << f2 << " = " << f1 * f2 << endl;
	cout << f1 << " / " << f2 << " = " << f1 / f2 << endl;
	cout << "++" << f1 << " * " << f2 << " = ";
	cout << ++f1 * f2 << endl;
	cout << "�������� ����� 1 = " << f1 << endl;
	cout << f1 << "--" << " * " << f2 << " = ";
	cout << f1-- * f2 << endl;
	cout << "�������� ����� 1 = " << f1 << endl;

	return 0;
}