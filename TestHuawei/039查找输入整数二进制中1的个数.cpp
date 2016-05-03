/*********************************************************
 * 查找输入整数二进制中1的个数

 * 题目描述

 * 请实现如下接口
 *     public static int findNumberOf1(intnum)
 *     {
 *         return 0;
 *     }譬如：输入5 ，5的二进制为101，输出2
 *  
 * 涉及知识点：


 * 输入描述:
 * 输入一个整数


 * 输出描述:
 * 计算整数二进制中1的个数

 * 输入例子:
 * 5

 * 输出例子:
 * 2
 *********************************************************/

#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int ret = 0;
		int length = 8 * sizeof(int);
		for (int i = 0; i < length; ++i) {
			if (n >> i & 1) 
				++ret;
		}
		cout << ret << endl;
	}
}


#if 0

#include<iostream>
 
using namespace std;
 
int number(intnum)
{
    int count = 0;

    while(num)
    {
        ++count;
        num = (num-1) & num;	// ???
    }
 
    return count;
}
 
int main()
 
{
 
    intnum=0;
    cin>>num;
    cout<<number(num) <<endl;
    return0;
 
}

#endif