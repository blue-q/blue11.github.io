#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	//引用就是 数据类型 &别名 = 原名
	//引用必须初始化 不能int &b；
	//引用不可更改，不能int &b=a；又int &b=c；
	int& b = a;
	cout << b << endl;
	cout << a << endl;
	b = 1;
	cout << "-----" << endl;
	cout << b << endl;
	cout << a << endl;
	system("pause");
	return 1;
}