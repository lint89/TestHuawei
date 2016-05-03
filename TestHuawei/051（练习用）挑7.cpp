/*********************************************************
 * （练习用）挑7

 * 题目描述

 * 输出7有关数字的个数，包括7的倍数，还有包含7的数字（如17，27，37...70，71，72，73...）的个数

 * 输入描述:
 * 一个正整数N。(N不大于30000)


 * 输出描述:
 * 不大于N的与7有关的数字个数，例如输入20，与7有关的数字包括7,14,17.

 * 输入例子:
 * 20

 * 输出例子:
 * 3
 *********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check7(int num)
{
	vector<int> numvec;
	while (num)
	{
		int a = num % 10;
		numvec.push_back(a);
		num /= 10;
	}

	vector<int>::iterator pos = find(numvec.begin(), numvec.end(), 7);
	if (pos == numvec.end())
		return false;
	else
		return true;
}

bool divide7(int num)
{
	if (num %7 == 0)
		return true;
	else
		return false;
}

int main()
{
	int num;

	while (cin >> num)
	{
		int ret = 0;
		for (int i = 1; i <= num; ++i) {
			if (divide7(i) || check7(i))
				++ret;
		}
		cout << ret << endl;
	}
}
