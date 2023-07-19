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
<<<<<<< HEAD
    int close_prog() { cout << "�� ��������! \n"; return 0; }
=======
    int close_prog() { cout << "До свидания! \n"; return 0; }
>>>>>>> 6ddf20b7d9b451e864cc18889ff8826e0d392dff

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string user_choice;
    char operation;
    int count{ 1 };

    Counter counter;
    


    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: \n";
    std::cin >> user_choice;

    if (user_choice == "да")
    {
<<<<<<< HEAD
        cout << "������� ��������� �������� ��������: ";
=======
        cout << "Введите начальное значение счётчика: ";
>>>>>>> 6ddf20b7d9b451e864cc18889ff8826e0d392dff
        cin >> count;
        cout << "\n";
    }
    Counter user{ count };
    do
    {
        cout << "Введите команду ('+', '-', '=' или 'х'): ";
        cin >> operation;

        if (operation == '+') user.add_count();
<<<<<<< HEAD
=======

        if (operation == '-') user.min_count();

        if (operation == '=') user.print_count();

        if (operation == 'х') user.close_prog();
>>>>>>> 6ddf20b7d9b451e864cc18889ff8826e0d392dff

    } while (operation != 'х');

    return 0;
}
