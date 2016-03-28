/*********************************************************
 * 题目描述

 * 编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)。不在范围内的不作统计。

 * 输入描述:
 * 输入N个字符，字符在ACSII码范围内(0~127)。


 * 输出描述:
 * 输出字符的个数。

 * 输入例子:
 * abc

 * 输出例子:
 * 3
 *********************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	string str;
	getline(cin, str);
	int bucket[128] = { 0 };

	string::iterator begin = str.begin();
	string::iterator end = str.end();
	string::iterator pos;
	for (pos = begin; pos != end; ++pos)
	{
		bucket[*pos] = +1;
	}

	int ret = 0;
	for (int i = 0; i < 128; ++i)
	{
		if (bucket[i] > 0)
			++ret;
	}

	cout << ret;

	return 0;

}