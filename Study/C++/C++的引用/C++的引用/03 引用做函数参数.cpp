#include<iostream>

using namespace std;

//值传递
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//地址传递
void swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递
void swap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;

	//值传递
	//swap1(a, b);

	//地址传递
	//swap2(&a, &b);

	//引用传递
	swap3(a, b);
	cout << a << endl;
	cout << b << endl;
	system("pause");
	return	1;
}