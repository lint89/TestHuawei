/*********************************************************
 * 题目描述

 * •连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
 * •长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

 * 输入描述:
 * 连续输入字符串(输入2次,每个字符串长度小于100)


 * 输出描述:
 * 输出到长度为8的新字符串数组

 * 输入例子:
 * abc
 * 123456789

 * 输出例子:
 * abc00000
 * 12345678
 * 90000000
 *********************************************************/

#if 1
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> vec;
	vector<string> ret;

	string str;

	while (cin >> str)
		vec.push_back(str);

	vector<string>::iterator begin = vec.begin();
	vector<string>::iterator end = vec.end();
	vector<string>::iterator pos;
	for (pos = begin; pos != end; ++pos)
	{
		str = *pos;
		if (str.size() == 0)
			continue;

		string::iterator strPos;
		for (strPos = str.begin(); strPos != str.end(); ++strPos) {
			
		}

	}

}
#endif

#if 0
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string str;
	char out[9] = "00000000";
	const char* tempStr;
	char* temp = (char *) malloc(9);
	while (cin >> str) {
		if (str.size() == 0)
			continue;

		tempStr = str.c_str();

		for (int i = 0; i < str.size(); i = i + 8) {
			memset(temp, '\0', 9);
			memcpy(temp, tempStr + i, 8);
			if (strlen(temp) < 8)
			{
				memcpy(out, temp, strlen(temp));
				cout << out << endl;
				continue;
			}
			cout << temp << endl;
		}
	}

	return 0;

}
#endif