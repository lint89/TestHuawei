/*********************************************************
 * 题目描述

 * 编写一个程序，将输入字符串中的字符按如下规则排序。
 * 规则1：英文字母从A到Z排列，不区分大小写。
 *       如，输入：Type 输出：epTy
 * 规则2：同一个英文字母的大小写同时存在时，按照输入顺序排列。
 *     如，输入：BabA 输出：aABb
 * 规则3：非英文字母的其它字符保持原来的位置。
 *     如，输入：By?e 输出：Be?y
 * 样例：
 *     输入：
 *    A Famous Saying: Much Ado About Nothing(2012/8).
 *     输出：
 *    A aaAAbc dFgghh: iimM nNn oooos Sttuuuy (2012/8).


 * 输入描述:



 * 输出描述:


 * 输入例子:
 * A Famous Saying: Much Ado About Nothing (2012/8).

 * 输出例子:
 * A aaAAbc dFgghh: iimM nNn oooos Sttuuuy (2012/8).
 *********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	string temp;
	string ret;

	getline(cin, str);
	while (str[0] != '\0')
	{
		temp.clear();
		ret.clear();
		for (int j = 0; j < 26; ++j)
		{
			for (int i = 0; i < str.size(); ++i)
			{
				char x = str[i];
				if ((str[i] == 'a' + j) || str[i] == 'A' + j)
					temp.push_back(str[i]);
			}
		}

		int index = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			char x = str[i];
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
			{
				ret.push_back(temp[index]);
				++index;
			}
			else
				ret.push_back(str[i]);
		}

		cout << ret << endl;

		getline(cin, str);

	}
}
