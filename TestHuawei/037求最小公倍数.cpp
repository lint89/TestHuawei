/*********************************************************
 * 求最小公倍数

 * 题目描述

 * 正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。

 * 输入描述:
 * 输入两个正整数A和B。


 * 输出描述:
 * 输出A和B的最小公倍数。

 * 输入例子:
 * 5 
 * 7

 * 输出例子:
 * 35
 *********************************************************/

#include <iostream>

using namespace std;


int main()
{
	int m, n;
	while (cin >> m >> n) {
		int product = m * n;
		int ret = m;
		if (m < n) ret = n;

		while (ret <= product) {
			if ((ret % m == 0) && (ret % n == 0))
			{
				cout << ret << endl;
				break;
			}
			++ret;
		}
	}
}


#if 0
#include <iostream>
 
using namespace std;
 
int gcd(int a, int b)
{
    int temp;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
 
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << (a*b / gcd(a, b)) << endl;
    }
 
    return 0;
}
#endif
