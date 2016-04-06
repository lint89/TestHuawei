/*********************************************************
 * 题目描述

 * 给出一个名字，该名字有26个字符串组成，定义这个字符串的“漂亮度”是其所有字母“漂亮度”的总和。
 * 每个字母都有一个“漂亮度”，范围在1到26之间。没有任何两个字母拥有相同的“漂亮度”。字母忽略大小写。
 * 给出多个名字，计算每个名字最大可能的“漂亮度”。

 * 输入描述:
 * 整数N，后续N个名字


 * 输出描述:
 * 每个名称可能的最大漂亮程度

 * 输入例子:
 * 2
 * zhangsan
 * lisi

 * 输出例子:
 * 192
 * 101
 *********************************************************/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void sort(int *val, int len)
{
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			int temp;
			if (val[j] < val[j+1]) {
				temp = val[j];
				val[j] = val[j+1];
				val[j+1] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	string str;

	while (scanf("%d", &n) != EOF) {
		while (n--) {
			cin >> str;

			for (int i = 0; i < str.size(); ++i)
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 'a' - 'A';
			}

			int num[26] = {0};

			for (int i = 0; i < str.size(); ++i)
				++num[str[i] - 'a'];

			sort(num, 26);

			int sum = 0;
			int val = 26;
			for (int i = 0; i < 26; ++i)
			{
				if (num[i] == 0) break;

				sum += val * num[i];
				--val;
			}

			cout << sum << endl;
		}
	}
}