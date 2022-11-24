#include<iostream>

using namespace std;

//定义常量
//1、宏常量 #define 常量名 常量值
#define fuck 30

int main()
{
	cout << "fuck you " << fuck << " day every month" << endl;
	//2、const 类型 常量名 = 常量值
	const int day = 7;
	cout << "you have" << day << " day get big yima" << endl;
	//创建变量的方法
	int a = 10;
	cout << "hello, C++" << a <<endl;

	return 0;
}