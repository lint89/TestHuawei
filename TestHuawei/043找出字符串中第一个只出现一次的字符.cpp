﻿/*********************************************************
 * 找出字符串中第一个只出现一次的字符

 * 题目描述

 * 找出字符串中第一个只出现一次的字符
 * 详细描述：
 * 接口说明
 * 原型：
 * bool FindChar(char* pInputString, char* pChar);
 * 输入参数：
 * char* pInputString：字符串
 * 输出参数（指针指向的内存区域保证有效）：
 * char* pChar：第一个只出现一次的字符
 * 如果无此字符 请输出'.'
 *  
 *  
 *  

 * 输入描述:
 * 输入一串字符


 * 输出描述:
 * 输出一个字符

 * 输入例子:
 * asdfasdfo

 * 输出例子:
 * o
 *********************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str;
	vector<pair<char, int>> chVec;
	pair<char, int> ch;
	while (cin >> str)
	{
		for (int i = 0; i < str.size(); ++i)
		{
			for (int j = 0; )
			{
			}
		}
	}
}


