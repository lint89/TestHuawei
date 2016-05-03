/*********************************************************
 * 输入整型数组和排序标识，对其元素按照升序或降序进行排序

 * 题目描述

 * 输入整型数组和排序标识，对其元素按照升序或降序进行排序
 * 接口说明
 * 原型：
 * void sortIntegerArray(Integer[] pIntegerArray, int iSortFlag);
 * 输入参数：
 *     Integer[] pIntegerArray：整型数组
 * int  iSortFlag：排序标识：0表示按升序，1表示按降序
 * 输出参数：
 *     无
 * 返回值：
 *     void


 * 输入描述:
 * 1、输入需要输入的整型数个数


 * 输出描述:
 * 输出排好序的数字

 * 输入例子:
 * 8
 * 1 2 4 9 3 55 64 25
 * 0

 * 输出例子:
 * 1 2 3 4 9 25 55 64
 *********************************************************/

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
	int n, num;
	vector<int> numvec;

	while (cin >> n)
	{
        numvec.clear();
		for (int i = 0; i < n; ++i)
		{
			cin >> num;
			numvec.push_back(num);
		}
		int flag = 0;
		cin >> flag;

		if (flag)
			sort(numvec.begin(), numvec.end(), greater<int>());
		else
			sort(numvec.begin(), numvec.end());

        int i = 0;
		for (; i < numvec.size() - 1; ++i)
			cout << numvec[i] << ' ';
        
        cout << numvec[i] << endl;
	}
}
