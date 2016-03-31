/*********************************************************
 * 题目描述
 * 
 * 计算最少出列多少位同学，使得剩下的同学排成合唱队形
 * 说明：
 * N位同学站成一排，音乐老师要请其中的(N-K)位同学出列，使得剩下的K位同学排成合唱队形。 
 * 合唱队形是指这样的一种队形：设K位同学从左到右依次编号为1，2…，K，他们的身高分别为T1，T2，…，TK，   则他们的身高满足存在i（1<=i<=K）使得Ti<T2<......<Ti-1<Ti>Ti+1>......>TK。 
 *      你的任务是，已知所有N位同学的身高，计算最少需要几位同学出列，可以使得剩下的同学排成合唱队形。 
 *       
 *********************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func(vector<int> &stu, int index, int len)
{
    int ret = 0;
    int max, min;
    for (int i = 0; i < index; ++i) {
        max = stu[i];
        if (stu[i + 1] < max)
            ++ret;
    }

    for (int i = index; i < len - 1; ++i) {
        min = stu[index];
        if (stu[i + 1] > min)
            ++ret;
    }

    return ret;
}

int main()
{
    int num;
    vector<int> stu;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int height = 0;
        cin >> height;
        stu.push_back(height);
    }

    int min = num;
    int temp;
    for (int i = 0; i < stu.size(); ++i) {
       temp =  func(stu, i, stu.size());
       if (temp < min) min = temp;
    }

    cout << min << endl;
}
