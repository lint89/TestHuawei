/*********************************************************
 * 进制转换

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

#include <string>
#include <iostream>
#include <vector>

using namespace std;

// 没有考虑范围
int main()
{
	string str;
	while (cin >> str) {
		//if (str[0] != '0' || str[1] != 'x' || str[1] != 'X')
		//	continue;

		int val = 0;
		int power = 1;
		int sum = 0;
		for (int i = str.size() - 1; i > 1; --i)
		{
			switch (str[i]) {
			case 'a': 
			case 'A': val = 10; break;
			case 'b':
			case 'B': val = 11; break;
			case 'c':
			case 'C': val = 12; break;
			case 'd':
			case 'D': val = 13; break;
			case 'e':
			case 'E': val = 14; break;
			case 'f':
			case 'F': val = 15; break;
			default: val = str[i] - '0'; break;
			}
			sum += val * power;
			power *= 16;
		}
		cout << power << endl;
	}
}