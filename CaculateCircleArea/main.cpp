#include<stdlib.h>
#include<iostream>
#include"caculator.h"
using namespace std;

int main()
{
	cout << "������Բ�İ뾶��";
	int r = 0;
	do
	{
		cin >> r;
		double s = CCaculator().CaculateCircle(r);
		cout << "����Բ�����Ϊ:" << s << endl;
	} while (r > 0);
	system("pause");
	return 0;
}