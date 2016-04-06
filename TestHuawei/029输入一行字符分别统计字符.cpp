/*********************************************************
 * 输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数

 * 题目描述

 * 输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数。
 *  
 *  

 * 输入描述:
 * 输入一行字符串，可以有空格


 * 输出描述:
 * 统计其中英文字符，空格字符，数字字符，其他字符的个数

 * 输入例子:
 * 1qazxsw23 edcvfr45tgbn hy67uj m,ki89ol.\\/;p0-=\\][

 * 输出例子:
 * 26
 * 3
 * 10
 * 12
 *********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	while (getline(cin, str)) {
		int c = 0, space = 0, digit = 0, other = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
				++c;
			} else if (str[i] == ' ') {
				++space;
			} else if (str[i] >= '0' && str[i] <= '9') {
				++digit;
			} else {
				++other;
			}

		}

		cout << c << endl << space << endl << digit << endl << other << endl;
	}
}