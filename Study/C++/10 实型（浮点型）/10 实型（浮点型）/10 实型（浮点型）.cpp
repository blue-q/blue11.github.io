#include<iostream>

using namespace std;

int main()
{	

	//Ĭ������£����һ��С�󣬻���ʾ6Ϊ��Ч����
	//������ float
	float f1 = 3.14f;
	float f2 = 3.13;
	cout << sizeof(f1) << endl;
	//˫����double
	double d1 = 3.2;
	cout << sizeof(d1) << endl;

	//��ѧ������
	float num = 6e3;
	cout << num << endl;
	return 0;
}