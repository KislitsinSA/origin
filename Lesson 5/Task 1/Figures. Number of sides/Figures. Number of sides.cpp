#include<iostream>
#include<Windows.h>
using namespace std;

class Figure
{
protected:
	unsigned sides_count{0};
	
	
public:
	Figure() : Figure(0) {};
	Figure(unsigned sides_count_f) 
	{
		sides_count = sides_count_f;
	};

	int get_sides_count()  { return sides_count; }
};
class Triangle : public Figure
{
public:
	Triangle() : Figure(3) {}
};

class Quadrangle : public Figure
{
public:
	Quadrangle() : Figure(4) {}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	Figure Figure;
	Triangle Triangle;
	Quadrangle Quadrangle;

	cout << "Количество сторон :\n"
		<< "Фигура: " << Figure.get_sides_count() << "\n"
		<< "Треугольник : " << Triangle.get_sides_count() << "\n"
		<< "Четырёхугольник : " << Quadrangle.get_sides_count() << "\n";

	return 0;
};
