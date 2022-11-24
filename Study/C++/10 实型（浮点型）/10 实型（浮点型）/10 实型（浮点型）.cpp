#include<iostream>

using namespace std;

int main()
{	

	//默认情况下，输出一个小鼠，会显示6为有效数字
	//单精度 float
	float f1 = 3.14f;
	float f2 = 3.13;
	cout << sizeof(f1) << endl;
	//双精度double
	double d1 = 3.2;
	cout << sizeof(d1) << endl;

	//科学计数法
	float num = 6e3;
	cout << num << endl;
	return 0;
}