#include<iostream>
#include<string>

using namespace std;

enum months
{
	������ = 1,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������
};

string Cout_Months_Func(months id)
{
	string Choice_Of_Months;
	switch (id)
	{
	case ������:
		Choice_Of_Months = "�����";
		break;
	case �������:
		Choice_Of_Months = "�������";
		break;
	case ����:
		Choice_Of_Months = "����";
		break;
	case ������:
		Choice_Of_Months = "������";
		break;
	case ���:
		Choice_Of_Months = "���";
		break;
	case ����:
		Choice_Of_Months = "����";
		break;
	case ����:
		Choice_Of_Months = "����";
		break;
	case ������:
		Choice_Of_Months = "������";
		break;
	case ��������:
		Choice_Of_Months = "��������";
		break;
	case �������:
		Choice_Of_Months = "�������";
		break;
	case ������:
		Choice_Of_Months = "������";
		break;
	case �������:
		Choice_Of_Months = "�������";
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
		cout << "������� ����� ������: " << "\n";
		cin >> UserNumber;
		if (UserNumber == 0)
		{
			cout << "�� ��������!" << "\n";
			break;
		}
		string m = Cout_Months_Func(static_cast<months>(UserNumber));

		if (UserNumber >= 1 && UserNumber <= 12) cout << m << "\n";
			else cout << "������������ �����!" << "\n";
	}
	
	return 0;
}