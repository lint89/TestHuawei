/*********************************************************
 * 字符串匹配

 * 题目描述

 * 题目标题：
 * 判断短字符串中的所有字符是否在长字符串中全部出现
 * 详细描述：
 * 接口说明
 * 原型：
 * boolIsAllCharExist(char* pShortString,char* pLongString);
 * 输入参数：
 *     char* pShortString：短字符串
 *     char* pLongString：长字符串
 *  

 * 输入描述:
 * 输入两个字符串。第一个为短字符，第二个为长字符。


 * 输出描述:
 * 返回值：

 * 输入例子:
 * bc
 * abc

 * 输出例子:
 * true
 *********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pat, str;
	while (cin >> pat >> str)
	{
		string ret = "true";
		for (int i = 0; i < pat.size(); ++i)
		{
			if (string::npos == str.find(pat[i], 0)) {
				ret = "false";
				break;
			}
		}

		cout << ret << endl;
	}
}


