#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "��������ֵA" << endl;
	cin >> a;
	cin >> b;
	cout << "��������ֵB" << endl;
	c = (a > b ? a : b);
	cout << c;
}