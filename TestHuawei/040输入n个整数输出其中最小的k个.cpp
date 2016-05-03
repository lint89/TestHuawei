﻿/*********************************************************
 * 输入n个整数，输出其中最小的k个

 * 题目描述

 * 输入n个整数，输出其中最小的k个。
 * 详细描述：
 * 接口说明
 * 原型：
 * bool GetMinK(unsignedint uiInputNum, int * pInputArray, unsignedint uiK, int * pOutputArray);
 * 输入参数：
 *      unsignedint uiInputNum //输入整数个数
 * int * pInputArray  //输入整数数组
 * unsignedint uiK   //需输出uiK个整数
 * 输出参数（指针指向的内存区域保证有效）：
 *     int * pOutputArray //最小的uiK个整数
 * 返回值：
 *         false 异常失败
 *           true  输出成功
 *  
 *  

 * 输入描述:
 * 输入说明 
 * 1 输入两个整数 
 * 2 输入一个整数数组


 * 输出描述:
 * 输出一个整数数组

 * 输入例子:
 * 5 2
 * 1 3 5 7 2

 * 输出例子:
 * 1 2
 *********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int m, n;
	vector<int> numvec;

	while (cin >> m >> n) {
		if (m < n) continue;

		int num;
		for (int i = 0; i < m; ++i) {
			cin >> num;
			numvec.push_back(num);
		}

		sort(numvec.begin(), numvec.end());

		for (int i = 0; i < n - 1; ++i)
			cout << numvec[i] << ' ';

		cout << numvec[n - 1] << endl;

		numvec.clear();
	}
}


