#include"Rhomb.h"


Rhomb::Rhomb(int QuadrSideA, int QuadrAngleA, int QuadrAngleB)
		: Quadrilateral(QuadrSideA, QuadrSideA, QuadrSideA, QuadrSideA, QuadrAngleA, QuadrAngleB, QuadrAngleA, QuadrAngleB)
	{
		Quadrilateral::FigureName = "Ромб";
	}
