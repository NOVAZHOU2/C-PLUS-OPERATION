#include <iostream>
#include <algorithm>
using namespace std;
#include "Myclass.h"
int main()
{
	Myclass obj1(0,0), obj2(5, 8);
	obj1.Myclass::Myclass(1, 3);
	obj1.print();
	obj2.print();
}