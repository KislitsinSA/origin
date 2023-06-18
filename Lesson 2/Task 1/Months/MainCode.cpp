#include<iostream>
#include<string>

using namespace std;

enum months
{
	€нварь = 1,
	февраль,
	март,
	апрель,
	май,
	июнь,
	июль,
	август,
	сент€брь,
	окт€брь,
	но€брь,
	декабрь
};

string Cout_Months_Func(months id)
{
	string Choice_Of_Months;
	switch (id)
	{
	case €нварь:
		Choice_Of_Months = "яварь";
		break;
	case февраль:
		Choice_Of_Months = "‘евраль";
		break;
	case март:
		Choice_Of_Months = "ћарт";
		break;
	case апрель:
		Choice_Of_Months = "јпрель";
		break;
	case май:
		Choice_Of_Months = "ћай";
		break;
	case июнь:
		Choice_Of_Months = "»юнь";
		break;
	case июль:
		Choice_Of_Months = "»юль";
		break;
	case август:
		Choice_Of_Months = "јвгуст";
		break;
	case сент€брь:
		Choice_Of_Months = "—ент€брь";
		break;
	case окт€брь:
		Choice_Of_Months = "ќкт€брь";
		break;
	case но€брь:
		Choice_Of_Months = "Ќо€брь";
		break;
	case декабрь:
		Choice_Of_Months = "ƒекабрь";
		break;
	}
	return Choice_Of_Months;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	auto UserNumber { 1 };

	while (UserNumber != 0)
	{
		cout << "¬ведите номер мес€ца: " << "\n";
		cin >> UserNumber;
		if (UserNumber == 0)
		{
			cout << "ƒо свидани€!" << "\n";
			break;
		}
		string m = Cout_Months_Func(static_cast<months>(UserNumber));

		if (UserNumber >= 1 && UserNumber <= 12) cout << m << "\n";
			else cout << "Ќеправильный номер!" << "\n";
	}
	
	return 0;
}