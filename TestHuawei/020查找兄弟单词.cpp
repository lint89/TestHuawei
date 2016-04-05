/*********************************************************
 * 输入描述:
 * 先输入字典中单词的个数，再输入n个单词作为字典单词。
 * 输入一个单词，查找其在字典中兄弟单词的个数
 * 再输入数字n


 * 输出描述:
 * 根据输入，输出查找到的兄弟单词的个数

 * 输入例子:
 * 3
 * abc
 * bca
 * cab
 * abc
 * 1

 * 输出例子:
 * 2
 * bca
 *********************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	int count;
	string s, s1, result;
	vector<string> v;

	while (cin >> num) {
		while (num != 0) {
			cin >> s;
			v.push_back(s);
			num--;
		}

		cin >> s1;
		string ss(s1);
		cin >> count;
		int k=0;
		int atom=1;

		for (auto i = v.begin(); i != v.end(); i++)
		{
			auto x = *i;
			sort(s1.begin(), s1.end());
			sort(x.begin(), x.end());

			if (s1 == x && (*i) != ss)
				k++;
			if (atom)
			{
				if (k == count)
				{
					result = *i;
					atom = 0;
				}
			}
		}

		cout << k << endl;
		cout << result;
		v.clear();
		s.clear();
	}
	return 0;
}