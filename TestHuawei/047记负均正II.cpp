/*********************************************************
 * 记负均正II

 * 题目描述

 * 从输入任意个整型数，统计其中的负数个数并求所有非负数的平均值

 * 输入描述:
 * 输入任意个整数


 * 输出描述:
 * 输出负数个数以及所有非负数的平均值

 * 输入例子:
 * -13
 * -4
 * -7

 * 输出例子:
 * 3
 * 0.0
 *********************************************************/

#include <iostream>
#include <vector>
#include <numeric>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	vector<int> positiveNum;
	vector<int> negitiveNum;

	while (cin >> n) {
		if (n >= 0) 
			positiveNum.push_back(n);
		else 
			negitiveNum.push_back(n);

		//if (cin.get() == EOF) 
		//	break;
		if(getchar()=='\n')
			break;
	}

	cout << negitiveNum.size() << endl;
	double average = accumulate(positiveNum.cbegin(), positiveNum.cend(), 0) 
						/ positiveNum.size();
	cout << showpoint << average << endl;
}


