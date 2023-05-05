#ifndef MYCLASS
#define MYCLASS
#include <iostream>
using namespace std;
class Myclass {
public:
	Myclass() :x(0), y(0) {}
	Myclass(int a = 0, int b = 0);
	void print();
private:
	int x, y;
};
#endif
