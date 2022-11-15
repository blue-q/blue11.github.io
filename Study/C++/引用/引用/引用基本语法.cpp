#include<iostream>

using namespace std;


int main() {
	int a = 10;
	//引用基本语法  
	// 数据类型  & 别名 =  原名

	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a的地址为： " << (int)&a << endl;
	cout << "b的地址为： " << (int)&b << endl;


	//引用注意事项
	//1、引用必须初始化
	//int& c; 这是错误的

	//2、引用确定后，不可更改
	int c = 20;
	//&b = c; 报错
	//重新赋值 将c的值赋给引用b所指的空间
	b = c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
}