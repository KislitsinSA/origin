#include"Triangle.h"
#include<exception>

	
try {
	Triangle::Triangle(int TrainSideA, int TrainSideB, int TrainSideC, int TrainAngleA, int TrainAngleB, int TrainAngleC)
	{
		FigureName = "Треугольник";
		sides = 3;
		sideA = TrainSideA;
		sideB = TrainSideB;
		sideC = TrainSideC;
		angleA = TrainAngleA;
		angleB = TrainAngleB;
		angleC = TrainAngleC;
	}
}
