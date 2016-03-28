/*********************************************************
* 题目描述

* 写出一个程序，接受一个十六进制的数值字符串，输出该数值的十进制字符串。（多组同时输入 ）

* 输入描述:
* 输入一个十六进制的数值字符串。


* 输出描述:
* 输出该数值的十进制字符串。

* 输入例子:
* 0xA

* 输出例子:
* 10
 *********************************************************/

#if 1
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string str;
	cin >> str;

	vector<char> ret;

	int val = 0;
	int cal = false;
	char cVal;

	string::reverse_iterator rbegin = str.rbegin();
	string::reverse_iterator rend = str.rend();
	string::reverse_iterator rpos; 
	for (rpos = rbegin; rpos != rend; rpos++)
	{
		if (*rpos == 'X' || *rpos == 'x')
			break;
		switch (*rpos)
		{
		case 'a': ;
		case 'A': val = 0; cal = true; break;
		case 'b': ;
		case 'B': val = 1; cal = true; break;
		case 'c': ;
		case 'C': val = 2; cal = true; break;
		case 'd': ;
		case 'D': val = 3; cal = true; break;
		case 'e': ;
		case 'E': val = 4; cal = true; break;
		case 'f': ;
		case 'F': val = 5; cal = true; break;
		default:  break;
		}	

		if (cal) val = int(*rpos - '0') + 1;
		else val = int(*rpos - '0');

		if (val == 10) {
			cal = true;
			val = 0;
		}

		cVal = char(val + '0');
		ret.push_back(cVal);
	}

	vector<char>::reverse_iterator rRetPos;
	for (rRetPos = ret.rbegin(); rRetPos != ret.rend(); ++rRetPos)
	{
		cout << *rRetPos;
	}
	cout << endl;
	return 0;
}
#endif