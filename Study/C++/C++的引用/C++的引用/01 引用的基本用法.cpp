#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	//���þ��� �������� &���� = ԭ��
	//���ñ����ʼ�� ����int &b��
	//���ò��ɸ��ģ�����int &b=a����int &b=c��
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