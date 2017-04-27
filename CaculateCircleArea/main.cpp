#include<stdlib.h>
#include<iostream>
#include"caculator.h"
using namespace std;

int main()
{
	cout << "ÇëÊäÈëÔ²µÄ°ë¾¶£º";
	int r = 0;
	do
	{
		cin >> r;
		double s = CCaculator().CaculateCircle(r);
		cout << s << endl;
	} while (r > 0);
	system("pause");
	return 0;
}