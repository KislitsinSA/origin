#include <iostream>
#include <string>
#include<Windows.h>

<<<<<<< HEAD
using namespace std;
=======

>>>>>>> c5bfa431c558983083caa5f05bddbcf586a380f7

class Counter
{
private:
    int count{ 1 };

public:

    Counter() {}

<<<<<<< HEAD
    Counter(int i)
    {
        count = i;
    }

    void add_count() { count += 1; cout << "\n"; }
    void min_count() { count -= 1; cout << "\n"; }
    void print_count() { cout << count << "\n\n"; }
    int close_prog() { cout << "До свидания! \n"; return 0; }
=======
    Counter(int i) 
    {
       count = i;
    }

    void add_count() { count += 1; std::cout << count << "\n"; }
    void min_count() { count -= 1; std::cout << count << "\n"; }
    void print_count() { std::cout << count << "\n"; }
    int close_prog() { std::cout << "Р”Рѕ СЃРІРёРґР°РЅРёСЏ! \n"; return 0; }
>>>>>>> c5bfa431c558983083caa5f05bddbcf586a380f7
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
        cout << "Введите начальное значение счётчика: ";
        cin >> count;
        cout << "\n";
    }
    Counter user{ count };
    do
    {
        cout << "Введите команду ('+', '-', '=' или 'х'): ";
        cin >> operation;

        if (operation == '+') user.add_count();
=======
        std::cout << "Р’РІРµРґРёС‚Рµ РЅР°С‡Р°Р»СЊРЅРѕРµ Р·РЅР°С‡РµРЅРёРµ СЃС‡С‘С‚С‡РёРєР°: ";
        std::cin >> count;
        std::cout << "\n";
    }
        Counter user{ count };
    do
    {
        std::cout << "Р’РІРµРґРёС‚Рµ РєРѕРјР°РЅРґСѓ ('+', '-', '=' РёР»Рё 'С…'): ";
        std::cin >> operation;

        if (operation == '+') user.add_count();

        if (operation == '-') user.min_count();

        if (operation == '=') user.print_count();

        if (operation == 'С…') user.close_prog();
>>>>>>> c5bfa431c558983083caa5f05bddbcf586a380f7

        if (operation == '-') user.min_count();

        if (operation == '=') user.print_count();

        if (operation == 'х') user.close_prog();

    } while (operation != 'х');

    return 0;
}