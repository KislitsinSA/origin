#include<iostream>
#include <string>

using namespace std;

class Figure
{
protected:
	string FigureName;
	int sideA{ 0 };
	int sideB{ 0 };
	int sideC{ 0 };
	int sideD{ 0 };
	int angleA{ 0 };
	int angleB{ 0 };
	int angleC{ 0 };
	int angleD{ 0 };
	bool QuadrSign = false;

public:
	string get_figure_name() { return FigureName; }
	int get_QuadrSign() { return QuadrSign; }

	int get_side_A() { return sideA; }
	int get_side_B() { return sideB; }
	int get_side_C() { return sideC; }
	int get_side_D() { return sideD; }

	int get_angle_A() { return angleA; }
	int get_angle_B() { return angleB; }
	int get_angle_C() { return angleC; }
	int get_angle_D() { return angleD; }
};


class Triangle : public Figure
{
public:
	Triangle(int TrainSideA, int TrainSideB, int TrainSideC, int TrainAngleA, int TrainAngleB, int TrainAngleC)
	{
		FigureName = "Треугольник";
		sideA = TrainSideA;
		sideB = TrainSideB;
		sideC = TrainSideC;
		angleA = TrainAngleA;
		angleB = TrainAngleB;
		angleC = TrainAngleC;
	}
};

class rightTriangle : public Triangle
{
public:
	rightTriangle(int TrainSideA, int TrainSideB, int TrainSideC, int TrainAngleA, int TrainAngleB)
		:Triangle(TrainSideA, TrainSideB, TrainSideC, TrainAngleA, TrainAngleB, 90)
	{
		Triangle::FigureName = "Прямоугольный треугольник";
	};
};

class isoscelesTriangle : public Triangle
{
public:
	isoscelesTriangle(int TrainSideA, int TrainSideB, int TrainAngleA, int TrainAngleB)
		: Triangle(TrainSideA, TrainSideB, TrainSideA, TrainAngleA, TrainAngleB, TrainAngleA)
	{
		Triangle::FigureName = "Равнобедренный треугольник";
	};
};

class equilateralTriangle : public Triangle
{
public:
	equilateralTriangle(int TrainSideA)
		: Triangle(TrainSideA, TrainSideA, TrainSideA, 60, 60, 60)
	{
		Triangle::FigureName = "Равносторонний треугольник";
	};
};

class Quadrilateral : public Figure
{

public:
	Quadrilateral(int QuadrSideA, int QuadrSideB, int QuadrSideC, int QuadrSideD, int QuadrAngleA, int QuadrAngleB, int QuadrAngleC, int QuadrAngleD)
	{
		FigureName = "Четырехугольник";

		QuadrSign = true;

		sideA = QuadrSideA;
		sideB = QuadrSideB;
		sideC = QuadrSideC;
		sideD = QuadrSideD;

		angleA = QuadrAngleA;
		angleB = QuadrAngleB;
		angleC = QuadrAngleC;
		angleD = QuadrAngleD;
	}
};

class Rectangle : public Quadrilateral
{
public: 
	Rectangle(int QuadrSideA, int QuadrSideB)
		: Quadrilateral(QuadrSideA, QuadrSideB, QuadrSideA, QuadrSideB, 90, 90, 90, 90)
	{
		Quadrilateral::FigureName = "Прямоугольник";
	}
};

class Square : public Quadrilateral
{
public:
	Square(int QuadrSideA)
		: Quadrilateral(QuadrSideA, QuadrSideA, QuadrSideA, QuadrSideA, 90, 90, 90, 90)
	{
		Quadrilateral::FigureName = "Квадрат";
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int QuadrSideA, int QuadrSideB, int QuadrAngleA, int QuadrAngleB)
		: Quadrilateral(QuadrSideA, QuadrSideB, QuadrSideA, QuadrSideB, QuadrAngleA, QuadrAngleB, QuadrAngleA, QuadrAngleB)
	{
		Quadrilateral::FigureName = "Параллелограмм";
	}
};

class Rhomb : public Quadrilateral
{
public:
	Rhomb(int QuadrSideA, int QuadrAngleA, int QuadrAngleB)
		: Quadrilateral(QuadrSideA, QuadrSideA, QuadrSideA, QuadrSideA, QuadrAngleA, QuadrAngleB, QuadrAngleA, QuadrAngleB)
	{
		Quadrilateral::FigureName = "Ромб";
	}
};

void print(Figure& f)
{
	cout << "\n" << f.get_figure_name()
		<< ": \n" << "Стороны: a = " << f.get_side_A() << ", b = " << f.get_side_B() << ", с = " << f.get_side_C();

	// проверка на четырехугольник по признаку
	if (f.get_QuadrSign()){
		cout << ", d = " << f.get_side_D() << "\n";
	}else{ cout << "\n"; }

	cout << "Углы: А = " << f.get_angle_A() << ", В = " << f.get_angle_B() << ", С = " << f.get_angle_C();

	if (f.get_QuadrSign()){
		cout << ", D = " << f.get_angle_D() << "\n"; 
	}else{ cout << "\n"; }
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
