#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	cout << "������A��ֵ";
	cin >> a;
	cout << "������B��ֵ";
	cin >> b;
	if (a || b)	//�����жϣ����a��b��������һ������0�������if�����ݡ�
	{
		cout << "�����ֵ��Ϊ��0��a||b���Ϊ1" << endl;
	}
	else	//�����жϣ����a��b���߶���0�������else�����ݡ�
	{
		cout << "�����ֵ��Ϊ0��a||b���Ϊ0" << endl;
	}
	return(0);
}
//ͬ��Ϊ�٣�����Ϊ��