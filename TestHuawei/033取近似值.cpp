﻿/*********************************************************
 * 取近似值

 * 题目描述

 * 写出一个程序，接受一个浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。 
 * 输入描述:
 * 输入一个浮点数值


 * 输出描述:
 * 输出该数值的近似整数值

 * 输入例子:
 * 5.5

 * 输出例子:
 * 6
 *********************************************************/

#include <iostream>

using namespace std;


int main()
{
	double num;
	int val;
	while (cin >> num) {
		val = num;
		if (num - val >= 0.5)
			cout << val + 1 << endl;
		else
			cout << val << endl;
	}
}
