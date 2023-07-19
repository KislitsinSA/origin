#include"Parallelogram.h"


Parallelogram::Parallelogram(int QuadrSideA, int QuadrSideB, int QuadrAngleA, int QuadrAngleB)
		: Quadrilateral(QuadrSideA, QuadrSideB, QuadrSideA, QuadrSideB, QuadrAngleA, QuadrAngleB, QuadrAngleA, QuadrAngleB)
	{
		Quadrilateral::FigureName = "Параллелограмм";
	}

