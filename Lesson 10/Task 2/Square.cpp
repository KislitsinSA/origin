#include"Square.h"

Square::Square(int QuadrSideA)
		: Quadrilateral(QuadrSideA, QuadrSideA, QuadrSideA, QuadrSideA, 90, 90, 90, 90)
	{
		Quadrilateral::FigureName = " вадрат";
	}