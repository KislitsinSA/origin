#include<iostream>
#include<string>
#include"Figure.h"
#include"Triangle.h"
#include"rightTriangle.h"
#include"isoscelesTriangle.h"
#include"equilateralTriangle.h"
#include"Quadrilateral.h"
#include"Square.h"
#include"Rectangle.h"
#include"Parallelogram.h"
#include"Rhomb.h"


using namespace std;


void print(Figure& f)
{
	cout << "\n" << f.get_figure_name()
		<< ": \n" << "Стороны: a = " << f.get_side_A() << ", b = " << f.get_side_B() << ", с = " << f.get_side_C();

	// проверка на четырехугольник по признаку
	if (f.get_QuadrSign()) {
		cout << ", d = " << f.get_side_D() << "\n";
	}
	else { cout << "\n"; }

	cout << "Углы: А = " << f.get_angle_A() << ", В = " << f.get_angle_B() << ", С = " << f.get_angle_C();

	if (f.get_QuadrSign()) {
		cout << ", D = " << f.get_angle_D() << "\n";
	}
	else { cout << "\n"; }
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	Triangle Triangle(10, 20, 30, 50, 60, 70);
	print(Triangle);

	rightTriangle rightTriangle(10, 20, 30, 50, 60);
	print(rightTriangle);

	isoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	print(isoscelesTriangle);

	equilateralTriangle equilateralTriangle(30);
	print(equilateralTriangle);

	Quadrilateral Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	print(Quadrilateral);

	Rectangle Rectangle(10, 20);
	print(Rectangle);

	Square Square(20);
	print(Square);

	Parallelogram Parallelogram(20, 30, 30, 40);
	print(Parallelogram);

	Rhomb Rhomb(30, 30, 40);
	print(Rhomb);
}
