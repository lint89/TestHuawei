/*********************************************************
 * 题目描述

 * 假设一个球从任意高度自由落下，每次落地后反跳回原高度的一半; 再落下, 求它在第5次落地时，共经历多少米?第5次反弹多高？ 
 *  
 *  

 * 输入描述:
 * 输入起始高度，int型


 * 输出描述:
 * 分别输出第5次落地时，共经过多少米第5次反弹多高

 * 输入例子:
 * 1

 * 输出例子:
 * 2.875
 * 0.03125
 *********************************************************/

#include <iostream>

using namespace std;

/**
 * 统计出第5次落地时，共经过多少米?
 * 
 * @param high 球的起始高度
 * @return 英文字母的个数
 */
double getJourney(int high)
{
	double h = high;
	double journey = high;
	for (int i = 1; i < 5; ++i) {
		journey += h;
		h /= 2;
	}

	return journey;
}

/**
 * 统计出第5次反弹多高?
 * 
 * @param high 球的起始高度
 * @return 空格的个数
 */
double getTenthHigh(int high)
{
	double h = high;
	for (int i = 0; i < 5; ++i)
		h = h/2;
	return h;
}

int main()
{
	int high;
	while (cin >> high) {
		cout << getJourney(high) << endl;
		cout << getTenthHigh(high) << endl;
	}
}