#include <iostream>
using namespace std;

class Fraction
{
private:
	int num_{ 0 };
	int denom_{ 0 };
public:
	Fraction(int num, int denom)
	{
		num_ = num;
		denom_ = denom;
	}
	bool operator == (Fraction f2) 
	{ 
		int NumForCoparisonFirst = num_ / denom_;
		int NumForCoparisonSecond = f2.num_ / f2.denom_;
		return NumForCoparisonFirst == NumForCoparisonSecond; 
	}
	bool operator != (Fraction f2) 
	{	
		int NumForCoparisonFirst = num_ / denom_;
		int NumForCoparisonSecond = f2.num_ / f2.denom_; 
		return NumForCoparisonFirst != NumForCoparisonSecond;
	}
	bool operator < (Fraction f2) 
	{
		int NumForCoparisonFirst = num_ / denom_;
		int NumForCoparisonSecond = f2.num_ / f2.denom_; 
		return NumForCoparisonFirst < NumForCoparisonSecond; 
	}
	bool operator > (Fraction f2)
	{
		int NumForCoparisonFirst = num_ / denom_;
		int NumForCoparisonSecond = f2.num_ / f2.denom_; 
		return NumForCoparisonFirst > NumForCoparisonSecond; 
	}
	bool operator <= (Fraction f2) 
	{
		int NumForCoparisonFirst = num_ / denom_;
		int NumForCoparisonSecond = f2.num_ / f2.denom_;
		return NumForCoparisonFirst <= NumForCoparisonSecond; 
	}
	bool operator >= (Fraction f2) 
	{
		int NumForCoparisonFirst = num_ / denom_;
		int NumForCoparisonSecond = f2.num_ / f2.denom_; 
		return NumForCoparisonFirst >= NumForCoparisonSecond; 
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	return 0;
}