#include<iostream>
using namespace std;
int main() {
	int a = 0;
	//switchֻ�������ͻ����ַ��ͣ���������һ������
	cout << "��������ֵA" << endl;
	cin >> a;
	switch (a)
	{
	case 10:
		cout << "�ߺ����" << endl;
		break;//�ǵü��������Ȼ��ȫ��������
	case 9:
		cout << "�ߺ�" << endl;
		break;
	case 8:
		cout << "����" << endl;
		break;
	case 7:
		cout << "�ɻ���" << endl;
		break;
	case 6:
		cout << "����" << endl;
		break;
	default:
		cout << "��������" << endl;
		break;
		//����a��ֵ�������������a=6 ���������
	}
}
