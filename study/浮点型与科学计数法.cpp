//������
//1.������
//2.˫����
#include<iostream>
using namespace std;
int main() {
	//1.�����ȣ�һ��Ҫ��С��������һ��f,7λ��Ч����
	float F1 = 3.14f;
	//2.˫���ȣ�һ��Ҫ��С��������һ��f��15-16λ��Ч����
	double F2 = 3.14f;
	cout << F1 << "���ǵ�����" << F2 << "����˫����\n" << endl;
	cout << "���ǵ�����ռ���ڴ�" << sizeof(F1) << "����˫����ռ���ڴ�" << sizeof(F2) << "\n" << endl;
	//��ѧ���������
	float F3 = 8e4f;
	cout << F3 << "��ѧ�������������" << "\n" << endl;
	float F4 = 8e-4f;
	cout << F4 << "��ѧ���������С��" << "\n" << endl;
	system("pause");
	return(0);

}