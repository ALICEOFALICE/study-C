#include<iostream>
using namespace std;
int main() {
	int a = 0;
	cout << "��������ķ���";
	cin >> a;
	if (a >= 529)//���е�һ���ж�
	{
		cout << "��ϲ�㿼�ϱ���һ����" << endl;
	}
	else if (a >= 443)//���еڶ����ж�
	{
		cout << "��ϲ�㿼�ϱ��ƶ�����" << endl;
	}
	else if (a >= 150)//���е������ж�
	{
		cout << "��ϲ�㿼��ר������" << endl;
	}
	//���������жϣ�����һ���ж�ûͨ�����Զ�����ڶ����жϣ�ֱ���жϳɹ����﷨ if   else if  
}