#include<iostream>
#include<string>
#include<Windows.h>

class length_exception : public std::exception 
{
	public:
		const char* what() const override { std::cout << "\nВы ввели слово запретной длины!До свидания."; return 0; }
};

int function(std::string str, int forbidden_length) 
{ 
	if (str.length() == forbidden_length) { throw length_exception(); }
	return str.length();
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	auto bad_length{ 0 };
	std::string word;

	std::cout << "Введите запретную длину : ";
	std::cin >> bad_length;
	
	do {
		try{
			std::cout << "\nВведите слово : ";
			std::getline(std::cin >> std::ws, word);
			std::cout << "\nДлина слова " << word << " равна " << function(word, bad_length) << "\n";
		}
		catch (const length_exception& ex) { std::cout << ex.what() << std::endl; }
		catch (...) { std::cout << "\nНеизвестная ошибка"; }
	} while (true);

	return 0;
}
