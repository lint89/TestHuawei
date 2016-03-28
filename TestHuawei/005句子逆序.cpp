/*********************************************************
 * 题目描述

 * 将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
 * 所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符


 * 输入描述:
 * 将一个英文语句以单词为单位逆序排放。


 * 输出描述:
 * 得到逆序的句子

 * 输入例子:
 * I am a boy

 * 输出例子:
 * boy a am I
 *********************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	string str;
	vector<string> words;
	string word;

	getline(cin, str);

	string::iterator strBegin = str.begin();
	string::iterator strEnd = str.end();
	string::iterator pos;
	for (pos = strBegin; pos != strEnd; ++pos)
	{
		if (*pos != ' ')
		{
			word.push_back(*pos);
		}
		else
		{
			words.push_back(word);
			word.clear();
		}
	}
	words.push_back(word);

	vector<string>::reverse_iterator rbegin = words.rbegin();
	vector<string>::reverse_iterator rend = words.rend();
	vector<string>::reverse_iterator rpos;
	for (rpos = rbegin; rpos != rend - 1; ++rpos)
	{
		cout << *rpos << ' ';
	}
	cout << *rpos;

	return 0;


	
}