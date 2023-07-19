#include"rightTriangle.h"


rightTriangle::rightTriangle(int TrainSideA, int TrainSideB, int TrainSideC, int TrainAngleA, int TrainAngleB)
		:Triangle(TrainSideA, TrainSideB, TrainSideC, TrainAngleA, TrainAngleB, 90)
	{
		Triangle::FigureName = "Прямоугольный треугольник";
	};
