/*********************************************************
 * 字符串分隔
 * 题目描述

 * •连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
 * •长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

 * 输入描述:
 * 连续输入字符串(输入2次,每个字符串长度小于100)


 * 输出描述:
 * 输出到长度为8的新字符串数组

 * 输入例子:
 * abc
 * 123456789

 * 输出例子:
 * abc00000
 * 12345678
 * 90000000
 *********************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		string output = "00000000";
		if (str.size() <= 8)
		{
			for (int i = 0; i < str.size(); ++i)
				output[i] = str[i];
			cout << output << endl; continue;
		}

		int n = str.size() / 8;
		for (int i = 0; i < n; ++i)
		{
			cout << str.substr(i*8, 8) << endl;
		}
		if (8*n < str.size())	// 当str仍有数据未输出时，进行补0
		{
			for (int i = 8 * n, j = 0; i < str.size(); ++i, ++j)
				output[j] = str[i];
			
			cout << output << endl; 
		}
	}
}
