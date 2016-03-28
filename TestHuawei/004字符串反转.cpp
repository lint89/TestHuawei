/*********************************************************
* 题目描述

* 写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。例如：

* 输入描述:
* 输入N个字符


* 输出描述:
* 输出该字符串反转后的字符串

* 输入例子:
* abcd

* 输出例子:
* dcba
 *********************************************************/

#include <iostream>
#include <string>

using namespace std;


int main()
{
	string str;
	cin >> str;

	string::reverse_iterator rbegin = str.rbegin();
	string::reverse_iterator rend = str.rend();
	string::reverse_iterator rpos;
	for (rpos = rbegin; rpos != rend; ++rpos)
	{
		cout << *rpos;
	}

	return 0;
}