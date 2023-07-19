#include"equilateralTriangle.h"


equilateralTriangle::equilateralTriangle(int TrainSideA)
		: Triangle(TrainSideA, TrainSideA, TrainSideA, 60, 60, 60)
	{
		Triangle::FigureName = "Равносторонний треугольник";
	}