#include<iostream>

using namespace std;

//sizeof�ؼ��ֿ���ͳ������������ռ�ڴ�Ĵ�С sizeof(��������/�������ͣ�

int main()
{
	cout << "shortռ���ڴ�Ϊ�� " << sizeof(short) << endl;
	cout << "intռ���ڴ�Ϊ�� " << sizeof(int) << endl;
	cout << "longռ���ڴ�Ϊ�� " << sizeof(long) << endl;
	long long a = 1;
	cout << "long longռ���ڴ�Ϊ�� " << sizeof(a) << endl;
	system("pause");
	return 0;
}
