#include<iostream>
using namespace std;
int main() {
	//��ʾ�������
	int a = 0;
	cout << "��������ķ���";
	cin >> a;
	//��ʾ����
	cout << "���ķ���Ϊ" << a << "���ڲ�ѯ¼ȡ���" << endl;
	//�ж�
	//����600һ�� 
		//����700 ����
		//����650 �廪
		//����	�˴�
	//����500���� 
	//����400���� 
	//���ఴ��û�ϼ���
	if (a > 600)
	{
		cout << "��ϲ����һ��" << endl;
		if (a > 700)
		{
			cout << "��ϲ���ϱ���" << endl;
		}
		else if (a > 650)
		{
			cout << "��ϲ�����廪" << endl;
		}
		else
		{
			cout << "��ϲ����Ե�����廪" << endl;
		}
	}
	else if (a > 500)
	{
		cout << "��ϲ���϶���" << endl;
	}
	else if (a > 400)
	{
		cout << "��ϲ��������" << endl;
	}
	else
	{
		cout << "��ϲ��ը��" << endl;
	}
	return(0);
}