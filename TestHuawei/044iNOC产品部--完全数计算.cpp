/*********************************************************
 * iNOC产品部--完全数计算

 * 题目描述

 * 完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。
 * 它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。
 * 例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。
 * 给定函数count(int n),用于计算n以内(含n)完全数的个数。计算范围, 0 < n <= 500000
 * 返回n以内完全数的个数。异常情况返回-1
 *  
 * public static int count(int n)
 *  
 *  

 * 输入描述:
 * 输入一个数字


 * 输出描述:
 * 输出完全数的个数

 * 输入例子:
 * 1000

 * 输出例子:
 * 3
 *********************************************************/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool isPerfect(int n)
{
	vector<int> divisorVec;
	for (int i = 1; i <= n / 2; ++i)	// n的约数小于等于n/2
	{
		if (n % i == 0)
			divisorVec.push_back(i);
	}

	int sum = accumulate(divisorVec.cbegin(), divisorVec.cend(), 0);

	return n == sum;
}

int main()
{
	int n;
	while (cin >> n)
	{
		if (n <= 0 || n >500000) {
			cout << -1 << endl;
			continue;
		}

		int ret = 0;
		for (int i = 1; i < n; ++i)
		{
			if (isPerfect(i))
				++ret;
		}

		cout << ret << endl;
	}
}


