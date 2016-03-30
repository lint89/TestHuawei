/*********************************************************
 * 题目描述

 * 密码要求:
 *  
 *  
 *  
 * 1.长度超过8位
 *  
 *  
 *  
 * 2.包括大小写字母.数字.其它符号,以上四种至少三种
 *  
 *  
 *  
 * 3.不能有相同长度超2的子串重复
 *  
 *  
 *  
 * 说明:长度超过2的子串


 * 输入描述:
 * 一组或多组长度超过2的子符串。每组占一行


 * 输出描述:
 * 如果符合要求输出：OK，否则输出NG

 * 输入例子:
 * 021Abc9000
 * 021Abc9Abc1
 * 021ABC9000
 * 021$bc9000

 * 输出例子:
 * OK
 * NG
 * NG
 * OK
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
