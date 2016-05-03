/*********************************************************
 * 字符统计

 * 题目描述

 * 如果统计的个数相同，则按照ASII码由小到大排序输出 。如果有其他字符，则对这些字符不用进行统计。
 * 实现以下接口：
 *     输入一个字符串，对字符中的各个英文字符，数字，空格进行统计（可反复调用）
 *     按照统计个数由多到少输出统计结果，如果统计的个数相同，则按照ASII码由小到大排序输出
 *     清空目前的统计结果，重新统计
 * 调用者会保证：
 * 输入的字符串以‘\0’结尾。
 *  
 *  

 * 输入描述:
 * 输入一串字符。


 * 输出描述:
 * 对字符中的
 * 各个英文字符（大小写分开统计），数字，空格进行统计，并按照统计个数由多到少输出,如果统计的个数相同，则按照ASII码由小到大排序输出 。如果有其他字符，则对这些字符不用进行统计。

 * 输入例子:
 * aadddccddc

 * 输出例子:
 * dca
 *********************************************************/

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;


int main()
{
	string str;

	while (cin >> str)
	{
		int *count = new int[128]();

		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				++count[str[i]];
			if (str[i] >= 'A' && str[i] <= 'Z')
				++count[str[i]];
			if (str[i] >= '0' && str[i] <= '9')
				++count[str[i]];
			if (str[i] == ' ')
				++count[str[i]];
		}

		multimap<int, char, greater<int>> input;
		for (int i = 0; i < 128; ++i)
		{
			input.insert(pair<int, char>(count[i], i));
		}

		for (auto elem : input)
		{
			if (elem.first == 0) break;
				
			cout << elem.second;
		}

		input.clear();
	}

//	system("pause");
}
