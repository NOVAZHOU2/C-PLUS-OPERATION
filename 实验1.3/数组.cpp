#include<iostream>
using namespace std;
class IntArray {

public:
	IntArray(int sz); // �����ʼ��Ϊsz��Ԫ�أ���ֵȫΪ0
	IntArray(int* array, int sz); // �þ�̬����array��ǰsz��Ԫ�س�ʼ��������
	IntArray(const IntArray& rhs); // �������캯��
	void printAll();
	void chushi(int sz);
	~IntArray(){}
private:
	int* ia;
	int size;
};
void IntArray::chushi(int sz)
{
	size = sz;
	ia = new int[size];
}
IntArray::IntArray(int sz) {
	chushi(sz);
	for (int ix = 0; ix < size; ++ix)
		ia[ix] = 0; // ��ʼ������Ԫ��
}

IntArray::IntArray(int* array, int sz) {
	chushi(sz);
	for (int ix = 0; ix < size; ++ix)
		ia[ix] = array[ix]; // �������ݳ�Ա
}
IntArray::IntArray(const IntArray& rhs)
{
	chushi(rhs.size);
	for (int ix = 0; ix < size; ix++)
		ia[ix] = rhs.ia[ix];
}
void IntArray::printAll()
{
	for (int ix = 0; ix < size; ++ix)
		cout << ia[ix] << " ";
	cout << endl;
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	IntArray arr1(10), arr2(a, 5), arr3(arr2);
	arr1.printAll();
	arr2.printAll();
	arr3.printAll();
	return 0;
}

