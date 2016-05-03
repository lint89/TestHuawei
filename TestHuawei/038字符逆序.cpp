﻿/*********************************************************
 * 字符逆序

 * 题目描述

 * 将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。 如：输入“I am a student”，输出“tneduts a ma I”。
 *  
 *  
 *  
 * 输入参数：
 * inputString：输入的字符串
 *  

 * 返回值：
 * 输出转换好的逆序字符串
 *  
 *  

 * 输入描述:
 * 输入一个字符串，可以有空格


 * 输出描述:
 * 输出逆序的字符串

 * 输入例子:
 * I am a student

 * 输出例子:
 * tneduts a ma I
 *********************************************************/

#include <iostream>
#include <string>

using namespace std;


int main()
{
	string str;
	while (getline(cin, str)) {
		for (int i = str.size() - 1; i >= 0; --i)
		{
			cout << str[i];
		}
		cout << endl;
	}
}


#if 0

#include <iostream>
#include <string>
#include <algorithm>
  
using namespace std;
  
int main()
{
    string input;
    getline(cin,input);
    {
        reverse(input.begin(), input.end());
        cout << input << endl;
    }
  
    return 0;
}

#endif
