#include <iostream>
#include <string>
#include<Windows.h>
#include"mian.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string user_choice;
    char operation;
    int count{ 1 };

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: \n";
    std::cin >> user_choice;

    if (user_choice == "да")
    {
        cout << "Введите начальное значение счётчика: ";
        cin >> count;
        cout << "\n";
    } 
    
    Counter user{count};

    do
    {
        cout << "Введите команду ('+', '-', '=' или 'х'): ";
        cin >> operation;

        if (operation == '+') user.add_count();

        if (operation == '-') user.min_count();

        if (operation == '=') user.print_count();

        if (operation == 'х') user.close_prog();

    } while (operation != 'х');

    return 0;
}