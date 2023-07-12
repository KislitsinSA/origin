#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;

class Counter
{
private:
    int count{ 1 };

public:

    Counter() {}

    Counter(int i)
    {
        count = i;
    }

    void add_count() { count += 1; cout << "\n"; }
    void min_count() { count -= 1; cout << "\n"; }
    void print_count() { cout << count << "\n\n"; }
    int close_prog() { cout << "�� ��������! \n"; return 0; }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string user_choice;
    char operation;
    int count{ 1 };

    Counter counter;


    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: \n";
    std::cin >> user_choice;

    if (user_choice == "��")
    {
        cout << "������� ��������� �������� ��������: ";
        cin >> count;
        cout << "\n";
    }
    Counter user{ count };
    do
    {
        cout << "������� ������� ('+', '-', '=' ��� '�'): ";
        cin >> operation;

        if (operation == '+') user.add_count();

        if (operation == '-') user.min_count();

        if (operation == '=') user.print_count();

        if (operation == '�') user.close_prog();

    } while (operation != '�');

    return 0;
}