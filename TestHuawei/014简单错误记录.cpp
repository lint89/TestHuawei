/*********************************************************
题目描述

开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号。
 
处理： 
 
1、 记录最多8条错误记录，循环记录，对相同的错误记录（净文件名称和行号完全匹配）只记录一条，错误计数增加；
 
2、 超过16个字符的文件名称，只记录文件的最后有效16个字符；
 
3、 输入的文件可能带路径，记录文件名称不能带路径。


输入描述:
一行或多行字符串。每行包括带路径文件名称，行号，以空格隔开。


输出描述:
将所有的记录统计并将结果输出，格式：文件名 代码行数 数目，一个空格隔开，如：

输入例子:
E:\V1R2\product\fpgadrive.c   1325

输出例子:
fpgadrive.c 1325 1
 *********************************************************/

#include <iostream>
#include <string>

using namespace std;

bool checkchar(string &str, int len)
{
	int ret = 0;
	bool lowcase = false, captial = false, num = false,  special = false;

	for (int i = 0; i < len; ++i)
	{
#if 0
		if ((! lowcase) && str[i] >= 'a' && str[i] <= 'z' )	// 检测小写字母
		{
			++ret; lowcase = true; continue;
		} 
		else if ((! captial) && str[i] >= 'A' && str[i] <= 'Z' ) // 检测大写字母
		{
			++ret; captial = true; continue;
		}
		else if ((! num) && str[i] >= '0' && str[i] <= '9' ) // 检测数字
		{
			++ret; num = true; continue;
		}
		else if ((! special) && (str[i] < 'a' || str[i] > 'z'
			|| str[i] < 'A' || str[i] > 'Z' || str[i] < '0' || str[i] > '9')) // 检测其他字符
		{
			++ret; special = true; continue;
		}
#endif
		if (str[i] >= 'a' && str[i] <= 'z' )	// 检测小写字母
		{
			lowcase = true; continue;
		} 
		else if (str[i] >= 'A' && str[i] <= 'Z' ) // 检测大写字母
		{
			captial = true; continue;
		}
		else if (str[i] >= '0' && str[i] <= '9' ) // 检测数字
		{
			num = true; continue;
		}
		else // 检测其他字符
		{
			special = true; continue;
		}
	}

	if (lowcase) ++ret;
	if (captial) ++ret;
	if (num) ++ret;
	if (special) ++ret;

	if (ret < 3) return true;
	else return false;
}

bool checkrepeat(string &str, int len) 
{
	string pattern;
#if 0	// 只需要检测3个字符相等
	for (int i = 3; i < len/2 + 1; ++i) {
		for (int j = 0; j < len -1; ++j) {
			pattern = str.substr(j, i);
			if (string::npos != str.find(pattern, j+i))
				return true;
		}
	}
#endif
	for (int j = 0; j < len - 2; ++j) {
		pattern = str.substr(j, 3);
		if (string::npos != str.find(pattern, j+3))
			return true;
	}
	return false;
}

int main()
{
    string str;
	string ret;
    while (cin >> str) {
		ret = "OK";
		if (str.size() <= 8)	
			ret = "NG";

		if (checkchar(str, str.size()))	
			ret = "NG";

		if (checkrepeat(str, str.size()))	
			ret = "NG";

		cout << ret << endl;
    }
    return 0;
}
