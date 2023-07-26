#pragma once
#include<string>

class Figure{

protected:
	std::string FigureName;
	int sideA{ 0 };
	int sideB{ 0 };
	int sideC{ 0 };
	int sideD{ 0 };
	int angleA{ 0 };
	int angleB{ 0 };
	int angleC{ 0 };
	int angleD{ 0 };
	bool QuadrSign = false;

public:
	std::string get_figure_name();
	int get_QuadrSign();

	int get_side_A();
	int get_side_B();
	int get_side_C();
	int get_side_D();

	int get_angle_A();
	int get_angle_B();
	int get_angle_C();
	int get_angle_D();
};
