#include <iostream>
#include <string>
#include<Windows.h>
 


class Counter
{
private:
    int count{ 1 }; 

public:

    Counter() {}

    Counter(int i): count(i) {}

    void add_count() { count += 1; std::cout << count << "\n";}
    void min_count() { count -= 1; std::cout << count << "\n";}
    void print_count() { std::cout << count << "\n"; }
    int close_prog() { std::cout << "До свидания! \n"; return 0;}
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
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> count;
        Counter user { count };
        std::cout << "\n";
    }

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'х'): ";
        std::cin >> operation;

        if (operation == '+') counter.add_count();
        
        if (operation == '-') counter.min_count();
        
        if (operation == '=') counter.print_count();
        
        if (operation == 'х') counter.close_prog(); 

    } while (operation != 'х');

    return 0;
}
