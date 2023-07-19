#include <iostream>

using namespace std;

#define MODE 1

#if !defined MODE
#error "Ошибка компиляции\n"
#endif


int add(int num1, int num2) { return num1 + num2; }

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    auto num1{ 0 };
    auto num2{ 0 };

#if MODE == 0
        cout << "Работаю в режиме тренировки\n";

#elif MODE == 1
        cout << "Работаю в боевом режиме\nВведите число 1: ";
        cin >> num1;
        cout << "Введите число 2: ";
        cin >> num2;
        cout << "Результат сложения: " << add(num1, num2) << "\n";
#else
        cout << "Неизвестный режим.Завершение работы\n";
        return 0;
#endif;
}