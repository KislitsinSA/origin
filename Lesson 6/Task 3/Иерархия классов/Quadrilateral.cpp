#include"Quadrilateral.h"


Quadrilateral::Quadrilateral(int QuadrSideA, int QuadrSideB, int QuadrSideC, int QuadrSideD, int QuadrAngleA, int QuadrAngleB, int QuadrAngleC, int QuadrAngleD)
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
