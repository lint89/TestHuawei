/*********************************************************
 * 题目描述
 * 
 * 实现删除字符串中出现次数最少的字符，若多个字符出现次数一样，则都删除。输出删除这些单词后的字符串，字符串中其它字符保持原来的顺序。
 * 
 * 输入描述:
 * 字符串只包含小写英文字母, 不考虑非法输入，输入的字符串长度小于等于20个字节。
 * 
 * 
 * 输出描述:
 *     删除字符串中出现次数最少的字符后的字符串。
 * 
 * 输入例子:
 *     abcdd
 * 
 * 输出例子:
 *     dd
 *********************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;
 
    while (cin >> str) {

        int num[26] = { 0 };

        for (int i = 0; i < str.size(); ++i) {
            num[str[i] - 'a']++;
        }

        int min = 20;   // 输入字符小于等于20字节
        for (int i = 0; i < 26; ++i) {
            if (num[i] == 0) continue;
            if (num[i] < min) min = num[i];
        }

        string out;
#if 0   // 记录删除字母，若字母等于删除字母，则标记
        vector<char> del;

        for (int i = 0; i < 26; ++i) {
            if (num[i] == min)
                del.push_back(i + 'a');
        }

        bool mark = true;
        for (int i = 0; i < str.size(); ++i) {
            mark = true;
            for (int j = 0; j < del.size(); ++j) {
                if (str[i] == del[j]) { 
                    mark = false;
                    break;
                }
            }
            if (mark) out.push_back(str[i]);
        }
        del.clear();
#endif        

#if 1   // 若当前字母数大于最小个数，则输出
        for (int i = 0; i < str.size(); ++i) {
            if (num[str[i] - 'a'] > min)
                out.push_back(str[i]);
        }
#endif        
        cout << out << endl;
        str.clear();
        out.clear();
    }
}
