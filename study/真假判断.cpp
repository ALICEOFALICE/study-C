#include<iostream>
using namespace std;

int main() {
	//�߼������ - ��&&
	//0Ϊ�٣�������ֵΪ��
	int a = 0;
	int b = 0;
	int test = 0;
	cout << "������a";
	cin >> a;
	cout << "������b";
	cin >> b;
	cout << "������c";
	cin >> test;
	if ((test > a) && (test < b))
	{
		cout << "True";
		//������&&�ٸ����ӣ����test��ֵ����aС��b��Ϊ�棬����Ϊ��
	};
	cout << "False";
	return(0);

	//ͬ��Ϊ�棬����Ϊ��
}