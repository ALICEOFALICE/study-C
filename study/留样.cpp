#include<iostream>
using namespace std;
int main() {
	int pig_1 = 0;
	int pig_2 = 0;
	int pig_3 = 0;
	cout << "�������һֻ�������" << endl;
	cin >> pig_1;
	cout << "������ڶ�ֻ�������" << endl;
	cin >> pig_2;
	cout << "���������ֻ�������" << endl;
	cin >> pig_3;
	if (pig_1 > pig_2)
	{
		if (pig_2 > pig_3) {
			cout << "1����";
		}
		else
		{
			if (pig_1 > pig_3)
			{
				cout << "1����";
			}
			else
			{
				cout << "3����";
			}
		}
	}
	else
	{
		if (pig_2 > pig_3)
		{
			cout << "2����";
		}
		else
		{
			cout << "3����";
		}
	}
}