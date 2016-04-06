/*********************************************************
 * 题目描述

 * 1、对输入的字符串进行加解密，并输出。
 * 2加密方法为：
 * 当内容是英文字母时则用该英文字母的后一个字母替换，同时字母变换大小写,如字母a时则替换为B；字母Z时则替换为a；
 * 当内容是数字时则把该数字加1，如0替换1，1替换2，9替换0；
 * 其他字符不做变化。
 * 3、解密方法为加密的逆过程。
 *  
 * 接口描述：
 *     实现接口，每个接口实现1个基本操作：
 * void Encrypt (char aucPassword[], char aucResult[])：在该函数中实现字符串加密并输出
 * 说明：
 * 1、字符串以\0结尾。
 * 2、字符串最长100个字符。
 *  
 * int unEncrypt (char result[], char password[])：在该函数中实现字符串解密并输出
 * 说明：
 * 1、字符串以\0结尾。
 *     2、字符串最长100个字符。
 *  
 *  
 *  

 * 输入描述:
 * 输入说明
 * 输入一串要加密的密码
 * 输入一串加过密的密码


 * 输出描述:
 * 输出说明
 * 输出加密后的字符
 * 输出解密后的字符

 * 输入例子:
 * abcdefg
 * BCDEFGH

 * 输出例子:
 * BCDEFGH
 * abcdefg
 *********************************************************/

#include <cstdio>

using namespace std;

void Encrypt (char aucPassword[], char aucResult[])
{
	char ret;
	int i = 0;
	for (; aucPassword[i] != '\0'; ++i)
	{
		// 切换小写字母
		if (aucPassword[i] == 'z')
			ret = 'A';
		if (aucPassword[i] >= 'a' && aucPassword[i] < 'z')
			ret = aucPassword[i] - ('a' - 'A') + 1;

		// 切换大写字母
		if (aucPassword[i] == 'Z')
			ret = 'a';
		if (aucPassword[i] >= 'A' && aucPassword[i] < 'Z')
			ret = aucPassword[i] + ('a' - 'A') + 1;

		// 切换数字
		if (aucPassword[i] == '9')
			ret = '0';
		if (aucPassword[i] >= '0' && aucPassword[i] < '9')
			ret = aucPassword[i] + 1;

		aucResult[i] = ret;
	}
	aucResult[i] = '\0';
}

int unEncrypt (char result[], char password[])
{
	char ret;
	int i = 0;
	for (; password[i] != '\0'; ++i)
	{
		// 切换小写字母
		if (password[i] == 'a')
			ret = 'Z';
		if (password[i] > 'a' && password[i] <= 'z')
			ret = password[i] - ('a' - 'A') - 1;

		// 切换大写字母
		if (password[i] == 'A')
			ret = 'z';
		if (password[i] > 'A' && password[i] <= 'Z')
			ret = password[i] + ('a' - 'A') - 1;

		// 切换数字
		if (password[i] == '0')
			ret = '9';
		if (password[i] > '0' && password[i] <= '9')
			ret = password[i] - 1;

		result[i] = ret;
	}
	result[i] = '\0';
	return 0;
}

int main()
{
	char aucPassword[100];
	char aucResult[100];

	char password[100];
	char result[100];

	while (scanf("%s", aucPassword) != EOF) {
		Encrypt(aucPassword, aucResult);
		printf("%s\n", aucResult);

		scanf("%s", password);
		unEncrypt(result, password);
		printf("%s\n", result);
	}

}