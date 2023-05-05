#include <iostream>
#include <algorithm>
using namespace std;
class myPoint {
public:
	
	double GetX() 
	{ return x; }

	double GetY() 
	{ return y; }

	void SetX(double x0) 
	{ x = x0; }

	void SetY(double y0) 
	{ x = y0; }

	void SetPoint(double x0, double y0)
	{ x = x0;y = y0; }

	void SetPoint(myPoint& np) 
	{ x = np.x; y = np.y; }

	double GetLength(myPoint p) 
	{	return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));}

	void Printit() 
	{ cout << " (" << x << "," << y << ") "; }
	myPoint(double a, double b);
	myPoint() :x(0), y(0) {};
private:
	double x, y;
};
myPoint::myPoint(double a,double b)
{
	x = a, y = b;
}
class Triangle {
public:
	void mianji()    
	{
		cout << "面积为："<< abs(a.GetX() * b.GetY() - a.GetX() * c.GetY() + b.GetX() * c.GetY() - b.GetX() * a.GetY() + c.GetX() * a.GetY() - b.GetX() * b.GetY())/2 << endl;
	}
	void zhouchang()
	{
		double p1 = sqrt((abs(a.GetX() - c.GetX()) * (a.GetX() - c.GetX())) + abs((a.GetY() - c.GetY()) * (a.GetY() - c.GetY())));
		double p2 = sqrt(abs((c.GetX() - b.GetX()) * (c.GetX() - b.GetX())) + abs((c.GetY() - b.GetY()) * (c.GetY() - b.GetY())));
		double p3 = sqrt(abs((a.GetX() - b.GetX())*(a.GetX() - b.GetX())) + abs((a.GetY() - b.GetY())*(a.GetY() - b.GetY())));
		cout << "周长是：" << p1 + p2 + p3;
		
	}
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
	{
		a.myPoint::myPoint(x1, y1);
		b.myPoint::myPoint(x2, y2);
		c.myPoint::myPoint(x3, y3);
	}
private:
	myPoint a, b, c;
};
int main()
{
	Triangle a(2,0,0,0,0,2);
	a.mianji();
	a.zhouchang();
}