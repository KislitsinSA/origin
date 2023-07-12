#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class addresses
{
private:

    string city;
    string street;
    int houseNumber = 0;
    int flatNumber = 0;

public:
    string output_address;

    addresses(string cityConstr, string streetConstr, int houseNumberConstr, int flatNumberConstr)
    {
        string city = cityConstr;
        string street = streetConstr;
        int houseNumber = houseNumberConstr;
        int flatNumber = flatNumberConstr;
    }

    // метод объединения полей в строку адреса
    string get_output_address(string city, string street, int houseNumber, int flatNumber)
    {
        string output_address = city + ", " + street + ", " + to_string(houseNumber) + ", " + to_string(flatNumber) + "\n";
        return output_address;
    }
   

};

////////////////////////////////////////////////
int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    auto numberOfAddresses{ 0 };
    string cityConstr;
    string streetConstr;
    int houseNumberConstr = 0;
    int flatNumberConstr = 0;

    ifstream fileIn("in.txt");

    if (!fileIn.is_open())
    {
        cout << "Файл не открыт или не найден";
        return 0;
    }
    fileIn >> numberOfAddresses; // запись в переменную кол-ва адресов, указанных в файле in.txt

    // Создание динамического массива и наполнение его адресами
    string* AddArr;
    AddArr = new string[numberOfAddresses];

    for (int i = 0; i <= numberOfAddresses - 1; i++)
    {
        fileIn >> cityConstr >> streetConstr >> houseNumberConstr >> flatNumberConstr;
        addresses addresses(cityConstr, streetConstr, houseNumberConstr, flatNumberConstr);
        AddArr[i] = addresses.get_output_address(cityConstr, streetConstr, houseNumberConstr, flatNumberConstr);
    };
   
<<<<<<< HEAD
    // ���������� ������� � ������� �� ��������
    for (int i = 0; i < numberOfAddresses - 1; i++)
=======
    // сортировка адресов в массиве по алфавиту
    for (int i = 0; i < numberOfAddresses - i; i++)
>>>>>>> c5bfa431c558983083caa5f05bddbcf586a380f7
    {
        for (int j = 0; j < numberOfAddresses - 1 - i; j++)
        {
            if (AddArr[j] > AddArr[j + 1])
            {
                string var = AddArr[j];
                AddArr[j] = AddArr[j + 1];
                AddArr[j + 1] = var;
            }
        }
    }

    // печать адресов в файл out.txt
    ofstream fileOut("out.txt");
    if (!fileOut.is_open())
    {
        cout << "Файл не открыт или не найден";
        return 0;
    }
    fileOut << numberOfAddresses << "\n";
    for (int i = 0; i < numberOfAddresses; i++)
    {
        fileOut << AddArr[i];
    }

    fileIn.close();
    fileOut.close();
    delete[] AddArr;
    AddArr = nullptr;

    return 0;
}
