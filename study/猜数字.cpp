#include<iostream>
#include<ctime>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	srand((unsigned int)time(NULL));//����ʱ����Ϊ�����
	a = rand() % 100;
	while (1)//���a<10,��ִ�п��д���
	{
		cout << "���һ������:";
		cin >> b;
		if (a > b)
		{
			cout << "��С�ˣ�����" << endl;
		}
		else if (a < b)
		{
			cout << "�´��ˣ�����" << endl;
		}
		else
		{
			cout << "�¶���,���ǣ��㲻������ô���˻���������Ϸ��ĺ�ô����\a" << endl;
			break;
		}
	}
	return(0);
	cout << "�����������";
	int stop = 0;
	cin >> stop;
}
