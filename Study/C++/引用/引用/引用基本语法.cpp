#include<iostream>

using namespace std;


int main() {
	int a = 10;
	//���û����﷨  
	// ��������  & ���� =  ԭ��

	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a�ĵ�ַΪ�� " << (int)&a << endl;
	cout << "b�ĵ�ַΪ�� " << (int)&b << endl;


	//����ע������
	//1�����ñ����ʼ��
	//int& c; ���Ǵ����

	//2������ȷ���󣬲��ɸ���
	int c = 20;
	//&b = c; ����
	//���¸�ֵ ��c��ֵ��������b��ָ�Ŀռ�
	b = c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
}