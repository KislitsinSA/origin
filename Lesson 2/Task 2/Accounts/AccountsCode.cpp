#include<iostream>
#include<string>

using namespace std;

struct Accounts
{
	int account;
	string name;
	double balance;
};

void Change_Balance_Func(struct Accounts& Client, double new_balance)
{
	Client.balance = new_balance;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251 > nul");
	auto new_balance{ 0 };

	Accounts Client;

	cout << "������� ����� �����: ";
	cin >> Client.account;
	cout << "\n";
	cout << "������� ��� ���������: ";
	cin >> Client.name;
	cout << "\n";
	cout << "������� ������: ";
	cin >> Client.balance;
	cout << "\n";
	cout << "������� ����� ������: ";
	cin >> new_balance;
	cout << "\n";
	
	Change_Balance_Func(Client, new_balance);

	cout << "��� ����: "
		<< Client.name << ", "
		<< Client.account << ", "
		<< Client.balance << "\n";

	return 0;
}
