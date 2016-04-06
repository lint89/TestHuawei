/*********************************************************
 * 提取不重复的整数

 * 题目描述

 * 输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

 * 输入描述:
 * 输入一个int型整数


 * 输出描述:
 * 按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

 * 输入例子:
 * 9876673

 * 输出例子:
 * 37689
 *********************************************************/

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int val;
	vector<int> out;
	vector<int> ret;

	while (cin >> val) {
		int num;
		while (val > 0)
		{
			num = val % 10;		
			out.push_back(num);
			val /= 10;
		}
		
		ret.push_back(out[0]);
		cout << out[0];
		for (int i = 0; i < out.size(); ++i)
		{
			bool repeat = false;
			for (int j = 0; j < ret.size(); ++j)
			{
				if (out[i] == ret[j])
				{
					repeat = true;
					break;
				}
			}
			if (! repeat) {
				cout << out[i];
				ret.push_back(out[i]);
			}
		}
		cout << endl;
	}
}


#if 0
#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[10]={0};
    int num=0;
    cin>>n ;
    while(n)
    {
        if(a[n%10]==0)
        {
            a[n%10]++;//这一步是更新，遇到下次相同的数会跳过
            num=num*10+n%10;
        }
        n/=10;
    }
     
    cout<<num<<endl;
     
    return 0;
}
#endif