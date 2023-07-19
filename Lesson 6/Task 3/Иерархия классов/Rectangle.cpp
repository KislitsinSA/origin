#include"Rectangle.h"

Rectangle::Rectangle(int QuadrSideA, int QuadrSideB)
		: Quadrilateral(QuadrSideA, QuadrSideB, QuadrSideA, QuadrSideB, 90, 90, 90, 90)
	{
		Quadrilateral::FigureName = "Прямоугольник";
	}
