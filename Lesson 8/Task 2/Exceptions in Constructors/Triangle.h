#pragma once
#include"Figure.h"
#include<exception>

class Triangle : public Figure
{
private:
	int sides {3};

public:
	try {
		Triangle(int TrainSideA, int TrainSideB, int TrainSideC, int TrainAngleA, int TrainAngleB, int TrainAngleC);
	}

};