/*********************************************************
 * 质数因子

 * 题目描述

 * 功能:输入一个正整数，按照从小到大的顺序输出它的所有质数的因子（如180的质数因子为2 2 3 3 5 ）
 *  
 *  
 * 详细描述：

 * 函数接口说明：
 *     public String getResult(long ulDataInput)
 * 输入参数：
 *          long ulDataInput：输入的正整数
 * 返回值：
 *         String
 *  
 *  

 * 输入描述:
 * 输入一个long型整数


 * 输出描述:
 * 按照从小到大的顺序输出它的所有质数的因子，以空格隔开

 * 输入例子:
 * 180

 * 输出例子:
 * 2 2 3 3 5
 *********************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long n;
	int ret;
	vector<int> out;

	while (cin >> n)
	{
		for (ret = 2;  n != 1; )
		{
			if (n % ret == 0)
			{
				out.push_back(ret);
				n /= ret;
				ret = 2;
			} else
			{
				++ret;
			}

		}

		int i = 0;
		for ( ; i < out.size() - 1; ++i)
			cout << out[i] << ' ';
		cout << out[i] << endl;
		out.clear();
	}
	return 0;
}