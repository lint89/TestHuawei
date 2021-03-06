﻿/*********************************************************
 * 图片整理

 * 题目描述

 * Lily上课时使用字母数字图片教小朋友们学习英语单词，每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。请大家给Lily帮忙，通过C语言解决。
 *  


 * 输入描述:
 * Lily使用的图片包括"A"到"Z"、"a"到"z"、"0"到"9"。输入字母或数字个数不超过1024。


 * 输出描述:
 * Lily的所有图片按照从小到大的顺序输出

 * 输入例子:
 * Ihave1nose2hands10fingers

 * 输出例子:
 * 0112Iaadeeefghhinnnorsssv
 *********************************************************/

#include <cstdio>

using namespace std;

int main()
{
	char str[1024];

	while (scanf("%s", str) != EOF) {
		int mark[128] = {0};
		for (int i = 0; str[i] != '\0'; ++i)
			++mark[str[i]];

		for (int i = 0; i < 128; ++i)
		{
			for (int j = 0; j < mark[i]; ++j)
				printf("%c", i);
		}
		printf("\n");
	}

}