#include "Myclass.h"
Myclass::Myclass(int a, int b)
{
	x = a, y = b;
}
void Myclass::print()
{
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}