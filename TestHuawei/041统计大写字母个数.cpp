/*********************************************************
 * 统计大写字母个数

 * 题目描述

 * 找出给定字符串中大写字符(即'A'-'Z')的个数
 * 接口说明
 *     原型：int CalcCapital(String str);
 *     返回值：int
 *  
 *  

 * 输入描述:
 * 输入一个String数据


 * 输出描述:
 * 输出string中大写字母的个数

 * 输入例子:
 * add123#$%#%#O

 * 输出例子:
 * 1
 *********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	while (cin >> str)
	{
		int ret = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				++ret;
		}
		cout << ret << endl;
	}
}


