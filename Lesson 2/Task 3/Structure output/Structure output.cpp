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
		cout << "�����: " << Adress_arr[i].city << "\n"
			<< "�����: " << Adress_arr[i].street << "\n"
			<< "����� ����: "  << Adress_arr[i].house_number << "\n"
			<< "����� ��������: " << Adress_arr[i].flat_number << "\n"
			<< "������: " << Adress_arr[i].index << "\n" << "\n";
	}
}

int main ()
{
	system("chcp 1251 > nul");

	Adress Adress_arr[2]{ {"������", "�����", 12, 8, 123456},{"������", "�������", 59, 143, 953769} };

	Print_Adress_funck(Adress_arr);

	return 0;
}
