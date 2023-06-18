#include<iostream>
#include<string>

using namespace std;

struct Adress
{
	string city;
	string street;
	int house_number;
	int flat_number;
	int index;
};

void Print_Adress_funck(Adress Adress_arr[])
{
	for (int i = 0; i <= 1; i++)
	{
		cout << "Город: " << Adress_arr[i].city << "\n"
			<< "Улица: " << Adress_arr[i].street << "\n"
			<< "Номер дома: "  << Adress_arr[i].house_number << "\n"
			<< "Номер квартиры: " << Adress_arr[i].flat_number << "\n"
			<< "Интекс: " << Adress_arr[i].index << "\n" << "\n";
	}
}

int main ()
{
	system("chcp 1251 > nul");

	Adress Adress_arr[2]{ {"Москва", "Арбат", 12, 8, 123456},{"Ижевск", "Пушкина", 59, 143, 953769} };

	Print_Adress_funck(Adress_arr);

	return 0;
}
