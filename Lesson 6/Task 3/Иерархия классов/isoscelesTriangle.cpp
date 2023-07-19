#include"isoscelesTriangle.h"

isoscelesTriangle::isoscelesTriangle(int TrainSideA, int TrainSideB, int TrainAngleA, int TrainAngleB)
		: Triangle(TrainSideA, TrainSideB, TrainSideA, TrainAngleA, TrainAngleB, TrainAngleA)
	{
		Triangle::FigureName = "Равнобедренный треугольник";
	};
