/*********************************************************
 * 明明的随机数

 * 题目描述

 * 明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤100），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。
 *  
 *  
 * Input Param 
 *      n               输入随机数的个数     
 *  inputArray      n个随机整数组成的数组 
 *      
 * Return Value
 *      OutputArray    输出处理后的随机整数
 *  

 * 注：测试用例保证输入参数的正确性，答题者无需验证。

 *  
 *  

 * 输入描述:
 * 输入多行，先输入随机整数的个数，在输入相应个数的整数


 * 输出描述:
 * 返回多行，处理后的结果

 * 输入例子:
 * 11
 * 10
 * 20
 * 40
 * 32
 * 67
 * 40
 * 20
 * 89
 * 300
 * 400
 * 15

 * 输出例子:
 * 10
 * 15
 * 20
 * 32
 * 40
 * 67
 * 89
 * 300
 * 400
 *********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertSort(vector<int> &val)
{

}

int main()
{
	int n;
	int val;
	vector<int> valVec;
	vector<int> valVecStrip;
	while (cin >> n) {
		if (n == EOF) break;	// can not work

		if (n == 0) continue;

		valVec.clear();
		valVecStrip.clear();

		for (int i = 0; i < n; ++i)
		{
			cin >> val;	
			valVec.push_back(val);
		}

		valVecStrip.push_back(valVec[0]);
		for (int i = 0; i < n; ++i)
		{
			bool repeat = false;
			for (int j = 0; j < valVecStrip.size(); ++j)
			{
				if (valVec[i] == valVecStrip[j])
				{
					repeat = true;
					break;
				}
			}
			if (! repeat) valVecStrip.push_back(valVec[i]);
		}

//		insertSort(valVecStrip);
		sort(valVecStrip.begin(), valVecStrip.end());

		for (int i = 0; i < valVecStrip.size(); ++i)
			cout << valVecStrip[i] << endl;
	}

}


#if 0
/*
使用<algorithm>中的sort()进行排序。
排好序输出时进行去重，若要输出的数和前一个输出的数相同则不输出该数。
*/
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n){
        int inputArray[n];
        int tmp;
        for(int i=0;i<n;i++){
            cin >> tmp;
            inputArray[i] = tmp;
        }
        sort(inputArray,inputArray+n);
        if(n==1)
            cout<<inputArray[n-1]<<endl;
        else{
            cout<<inputArray[0]<<endl;
            for(int i=1;i<n;++i){
                if(inputArray[i]!=inputArray[i-1])
                    cout << inputArray[i] << endl;
            }
        }
    }
 
    return 0;
}
#endif

#if 0
#include <iostream>
#include <set>
using namespace std;
  
int main() {
    int n;
    while (cin >> n){
        set<int> nums;
        int temp;
        for(int i=0;i<n;i++){
            cin >> temp;
            nums.insert(temp);
        }
        for(auto n:nums){
            cout << n << endl;
        }
    }
    return 0;
}
#endif