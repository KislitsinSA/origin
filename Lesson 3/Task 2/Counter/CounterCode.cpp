#include <iostream>
#include <string>
#include<Windows.h>

class Counter
{
private:
    int count = 1;

public:

    void user_count() { std::cin >> count;}
    void add_count() { count += 1; std::cout << count << "\n";}
    void min_count() { count -= 1; std::cout << count << "\n";}
    void print_count() { std::cout << count << "\n"; }
    int close_prog() { std::cout << "�� ��������! \n"; return 0;}
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string user_choice;
    char operation;

    Counter counter;

    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: \n";
    std::cin >> user_choice;

    if (user_choice == "��")
    {
        std::cout << "������� ��������� �������� ��������: ";
        counter.user_count();
        std::cout << "\n";
    }

    do
    {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> operation;

        if (operation == '+') counter.add_count();
        
        if (operation == '-') counter.min_count();
        
        if (operation == '=') counter.print_count();
        
        if (operation == '�') counter.close_prog(); 

    } while (operation != '�');

    return 0;
}