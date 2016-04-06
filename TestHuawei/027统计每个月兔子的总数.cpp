/*********************************************************
 * 题目描述

 * 有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
 *  

 * 输入描述:
 * 输入int型表示month


 * 输出描述:
 * 输出兔子总数int型

 * 输入例子:
 * 9

 * 输出例子:
 * 34
 *********************************************************/

#include <iostream>

using namespace std;

int fab(int n)
{
	if (n < 2)
		return 1;
	else if (n == 2)
		return 1;
	else 
		return fab(n - 1) + fab(n - 2);

	return 0;
}

int main()
{
	int n;

	while (cin >> n)
	{
		cout << fab(n) << endl;
	}
}