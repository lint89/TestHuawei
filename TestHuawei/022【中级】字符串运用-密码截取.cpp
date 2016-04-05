﻿/*********************************************************
 * 题目描述

 * Catcher是MCA国的情报员，他工作时发现敌国会用一些对称的密码进行通信，比如像这些ABBA，ABA，A，123321，但是他们有时会在开始或结束时加入一些无关的字符以防止别国破解。比如进行下列变化 ABBA->12ABBA,ABA->ABAKK,123321->51233214　。因为截获的串太长了，而且存在多种可能的情况（abaaab可看作是aba,或baaab的加密形式），Cathcer的工作量实在是太大了，他只能向电脑高手求助，你能帮Catcher找出最长的有效密码串吗？ 样例输入: ABBA 12ABBA A ABAKK 51233214 abaaab 样例输出: 4 4 1 3 6 5 可以使用中提供的库函数。 实现接口，每个接口实现1个基本操作： voidGetCipherMaxLen(characCipherContent[],int *piCipherLen)： acCipherContent是一个字符串数组常量，见参考用例； piCipherLen为输出有效密码串的最大长度； 题目框架中有2个参考用例，其它用例请执行编写。 
 * 输入描述:
 * 输入一串字符


 * 输出描述:
 * 输出有效长度

 * 输入例子:
 * ABBA

 * 输出例子:
 * 4
 *********************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str)) {
	}
}