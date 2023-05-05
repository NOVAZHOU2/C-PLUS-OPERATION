#include <iostream>
#include <algorithm>
using namespace std;
class rectangle {
public:
	void zhouchang()
	{
		cout<< (x + y) * 2<<endl;
	}
	void mianji()
	{
		cout<<x * y << endl;
	}
	rectangle():x(0),y(0){}
	rectangle(float a, float b);
private:
	float x, y;
};
rectangle::rectangle(float a, float b)
{
	x = a, y = b;
}
int main()
{
	rectangle a, b;
	a.rectangle::rectangle(20, 50);
	b.rectangle::rectangle(3.6, 4.5);
	a.zhouchang();
	a.mianji();
	b.zhouchang();
	b.mianji();

}