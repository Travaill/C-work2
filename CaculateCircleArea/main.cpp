#include<stdlib.h>
#include<iostream>
#include"caculator.h"
using namespace std;

int main()
{
	cout << "请输入圆的半径：";
	int r = 0;
	do
	{
		cin >> r;
		double s = CCaculator().CaculateCircle(r);
		cout << "所求圆的面积为:" << s << endl;
	} while (r > 0);
	system("pause");
	return 0;
}