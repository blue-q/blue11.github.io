#include<iostream>

using namespace std;

//sizeof关键字可以统计数据类型所占内存的大小 sizeof(变量名字/变量类型）

int main()
{
	cout << "short占用内存为： " << sizeof(short) << endl;
	cout << "int占用内存为： " << sizeof(int) << endl;
	cout << "long占用内存为： " << sizeof(long) << endl;
	long long a = 1;
	cout << "long long占用内存为： " << sizeof(a) << endl;
	system("pause");
	return 0;
}
