#include<iostream>
#include <string>


using namespace std;

class Figure
{
protected:
	string FigureName = "Фигура";
	int sides{ 0 }; // число сторон
	int sideA{ 0 };
	int sideB{ 0 };
	int sideC{ 0 };
	int sideD{ 0 };
	int angleA{ 0 };
	int angleB{ 0 };
	int angleC{ 0 };
	int angleD{ 0 };
	int numSides{ 0 };
	bool figureMatch = true; // переменная для проверки на правильность фигуры

	virtual bool check(){
		if (numSides == 0){
			return true;
		}else{
			return false;}
	}

public:
	string get_figure_name() { return FigureName; }

	int get_side_A() { return sideA; }
	int get_side_B() { return sideB; }
	int get_side_C() { return sideC; }
	int get_side_D() { return sideD; }

	int get_angle_A() { return angleA; }
	int get_angle_B() { return angleB; }
	int get_angle_C() { return angleC; }
	int get_angle_D() { return angleD; }
	
	virtual void print_info() // вывод и проверка на правильность фигуры
	{
		cout << "\n" << FigureName << ":" << "\n";
		if (check()){
			cout << "Правильная \n";
		}else {
			cout << "Неправильная \n";
		}
		cout << "Количество сторон: " << sides << "\n";
	}
};


class Triangle : public Figure
{
protected:

	bool check()
	{
		if ((angleA + angleB+ angleC) == 180) {
			return true;
		}else{
			return false;
		}
	}

public:
	Triangle(int TrainSideA, int TrainSideB, int TrainSideC, int TrainAngleA, int TrainAngleB, int TrainAngleC)
	{
		FigureName = "Треугольник";
		sides = 3;
		figureMatch = check();
		sideA = TrainSideA;
		sideB = TrainSideB;
		sideC = TrainSideC;
		angleA = TrainAngleA;
		angleB = TrainAngleB;
		angleC = TrainAngleC;
	}

	void print_info() override
	{
		Figure::print_info();
		cout << "Стороны: a = " << get_side_A() << ", b = " << get_side_B() << ", с = " << get_side_C() << "\n";
		cout << "Углы: А = " << get_angle_A() << ", В = " << get_angle_B() << ", С = " << get_angle_C() << "\n";
	}
};

class rightTriangle : public Triangle
{
protected:

bool check() override {
			if (Triangle::check() && (angleC == 90)) {
				return true;
			}else{
				return false;}
		};

public:
	rightTriangle(int TrainSideA, int TrainSideB, int TrainSideC, int TrainAngleA, int TrainAngleB)
		:Triangle(TrainSideA, TrainSideB, TrainSideC, TrainAngleA, TrainAngleB, 90)
	{
		Triangle::FigureName = "Прямоугольный треугольник";		
	};
};

class isoscelesTriangle : public Triangle
{
protected:
	bool check() override {
		if (Triangle::check() && (sideA == sideC && angleA == angleC)) {
			return true;
		}else{
			return false;}
	};
public:
	isoscelesTriangle(int TrainSideA, int TrainSideB, int TrainAngleA, int TrainAngleB)
		: Triangle(TrainSideA, TrainSideB, TrainSideA, TrainAngleA, TrainAngleB, TrainAngleA)
	{
		Triangle::FigureName = "Равнобедренный треугольник";
	};
};

class equilateralTriangle : public Triangle
{
private:
	bool check_equilateralTriangle() {
		if  ((sideA == sideB && sideB == sideC) && ((angleA == 60) && (angleA = 60) && (angleC = 60))) {
			return true;
		}else {
			return false;}
	};

public:
	equilateralTriangle(int TrainSideA)
		: Triangle(TrainSideA, TrainSideA, TrainSideA, 60, 60, 60)
	{
		Triangle::FigureName = "Равносторонний треугольник";
	};
protected:
	bool check() override{
		if (Triangle::check() && (check_equilateralTriangle())){
			return true;
		}else{
			return false;
		};
	};
};

class Quadrilateral : public Figure
{
protected:
	virtual bool check_angle_sum()
	{
		if ((angleA + angleB + angleC + angleD) == 360){
			return true;
		}else{
			return false;
		}
	};

	// равенство сторон a = c и b = d 
	bool check_side_equality_AC_and_BD()
	{
		if (sideA == sideC && sideB == sideD){
			return true;
		}else {
			return false;
		}
	};

	//равенство всех сторон
	bool check_side_equality()
	{
		if (sideA == sideB && sideA == sideC && sideA == sideD){
			return true;
		}else{
			return false;
		}
	};

	//равенство всех углов 90
	bool check_angles_90()
	{
		if ((angleA == 90) && (angleB == 90) && (angleC == 90) && (angleD == 90)){
			return true;
		}else{
			return false;
		}
	};

	//равенство углов A,C и B,D
	bool сheck_angle_equality_AC_BD()
	{
		if (angleA == angleC && angleB == angleD){
			return true;
		}else{
			return false;
		}
	};

public:
	Quadrilateral(int QuadrSideA, int QuadrSideB, int QuadrSideC, int QuadrSideD, int QuadrAngleA, int QuadrAngleB, int QuadrAngleC, int QuadrAngleD)
	{
		FigureName = "Четырехугольник";

		sides = 4;
		figureMatch = check();

		sideA = QuadrSideA;
		sideB = QuadrSideB;
		sideC = QuadrSideC;
		sideD = QuadrSideD;

		angleA = QuadrAngleA;
		angleB = QuadrAngleB;
		angleC = QuadrAngleC;
		angleD = QuadrAngleD;
	}

	void print_info() override
	{
		Figure::print_info();
		cout << "Стороны:" << " a = " << get_side_A() << ", b = " << get_side_B() << ", с = " << get_side_C() << ", d = " << get_side_D() << "\n";
		cout << "Углы:" << " А = " << get_angle_A() << ", В = " << get_angle_B() << ", С = " << get_angle_C() << ", D = " << get_angle_D() << "\n";
	}

};

class Rectangle : public Quadrilateral
{
protected:
	bool check() override
	{
		if (Quadrilateral::check() && Quadrilateral::check_side_equality_AC_and_BD() && Quadrilateral::check_angles_90()){
			return true;
		}else{
			return false;
		}
	};
public:
	Rectangle(int QuadrSideA, int QuadrSideB)
		: Quadrilateral(QuadrSideA, QuadrSideB, QuadrSideA, QuadrSideB, 90, 90, 90, 90)
	{
		Quadrilateral::FigureName = "Прямоугольник";
	}
};

class Square : public Quadrilateral
{
protected:
	bool check() override
	{
		if (Quadrilateral::check() && Quadrilateral::check_side_equality() && Quadrilateral::check_angles_90()){
			return true;
		}else{
			return false;
		}
	}
public:
	Square(int QuadrSideA)
		: Quadrilateral(QuadrSideA, QuadrSideA, QuadrSideA, QuadrSideA, 90, 90, 90, 90)
	{
		Quadrilateral::FigureName = "Квадрат";
	}
};

class Parallelogram : public Quadrilateral
{
	
protected:
	bool check() override
	{
		if (Quadrilateral::check() && Quadrilateral::check_side_equality_AC_and_BD() && Quadrilateral::сheck_angle_equality_AC_BD()){
			return true;
		}else{
			return false;
		}
	}

public:
	Parallelogram(int QuadrSideA, int QuadrSideB, int QuadrAngleA, int QuadrAngleB)
		: Quadrilateral(QuadrSideA, QuadrSideB, QuadrSideA, QuadrSideB, QuadrAngleA, QuadrAngleB, QuadrAngleA, QuadrAngleB)
	{
		Quadrilateral::FigureName = "Параллелограмм";
	}
};

class Rhomb : public Quadrilateral
{
protected:
	bool check() override
	{
		if (Quadrilateral::check() && Quadrilateral::check_side_equality() && Quadrilateral::сheck_angle_equality_AC_BD()){
			return true;
		}else{
			return false;
		}
	}

public:
	Rhomb(int QuadrSideA, int QuadrAngleA, int QuadrAngleB)
		: Quadrilateral(QuadrSideA, QuadrSideA, QuadrSideA, QuadrSideA, QuadrAngleA, QuadrAngleB, QuadrAngleA, QuadrAngleB)
	{
		Quadrilateral::FigureName = "Ромб";
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	Figure Figure;
	Figure.print_info();

	Triangle Triangle(10, 20, 30, 50, 60, 70);
	Triangle.print_info();

	rightTriangle rightTriangle(10, 20, 30, 45, 45);
	rightTriangle.print_info();

	isoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	isoscelesTriangle.print_info();

	equilateralTriangle equilateralTriangle(30);
	equilateralTriangle.print_info();

	Quadrilateral Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Quadrilateral.print_info();

	Rectangle Rectangle(10, 20);
	Rectangle.print_info();

	Square Square(20);
	Square.print_info();

	Parallelogram Parallelogram(20, 30, 30, 40);
	Parallelogram.print_info();

	Rhomb Rhomb(30, 30, 40);
	Rhomb.print_info();

	return 0;
}
