/*********************************************************
 * 题目描述

 * 连续输入字符串(输出次数为N,字符串长度小于100)，请按长度为8拆分每个字符串后输出到新的字符串数组，
 * 长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
 * 首先输入一个整数，为要输入的字符串个数。
 * 例如：
 * 输入：2
 *       abc
 *       12345789
 * 输出：abc00000
 *       12345678
 *       90000000
 *  
 * 输入描述:
 * 首先输入数字n，表示要输入多少个字符串。连续输入字符串(输出次数为N,字符串长度小于100)。


 * 输出描述:
 * 按长度为8拆分每个字符串后输出到新的字符串数组，长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

 * 输入例子:
 * 2
 * abc
 * 123456789

 * 输出例子:
 * abc00000
 * 12345678
 * 90000000
 *********************************************************/

#if 0
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int num;
	while (cin >> num) {
		string str;
		while (num--)
		{
			string out;

			cin >> str;	

			out = "00000000";
			if (str.size() < 8) {
				for (int i = 0; i < str.size(); ++i)
					out[i] = str[i];

				cout << out << endl;
			} else if (str.size() == 8) {
				cout << str << endl;
				cout << out << endl;
			} else {
				int num = str.size() / 8;
				for (int i = 0; i < num; ++i)
					cout << str.substr(i*8, 8) << endl;

				for (int i = num * 8; i < str.size(); ++i)
					out[i - num*8] = str[i];

				cout << out << endl;
			}
		}
	}

}

#endif


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int num;
	while (cin >> num) {
		string str;
		while (num--)
		{
			cin >> str;	

			while (str.size() > 8)
			{
				cout << str.substr(0, 8) << endl;
				str = str.substr(8);
			}

			string out = "00000000";
			if (str.size() == 8) {
				cout << str << endl;
				cout << out << endl;
			} else {
				for (int i = 0; i < str.size(); ++i)
					out[i] = str[i];
				//out.replace(0, str.size() - 1, str);
				cout << out << endl;
			}
		}
	}

}

