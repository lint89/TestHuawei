/*********************************************************
 * 题目描述
 * 
 * 开发一个坐标计算工具， A表示向左移动，D表示向右移动，W表示向上移动，S表示向下移动。从（0,0）点开始移动，从输入字符串里面读取一些坐标，并将最终输入结果输出到输出文件里面。
 *  
 * 输入：
 *  
 * 合法坐标为A(或者D或者W或者S) + 数字（两位以内）
 *  
 * 坐标之间以;分隔。
 *  
 * 非法坐标点需要进行丢弃。如AA10;  A1A;  $%$;  YAD; 等。
 *  
 * 下面是一个简单的例子 如：
 *  
 * A10;S20;W10;D30;X;A1A;B10A11;;A10;
 *  
 * 处理过程：
 *  
 * 起点（0,0）
 *  
 * +   A10   =  （-10,0）
 *  
 * +   S20   =  (-10,-20)
 *  
 * +   W10  =  (-10,-10)
 *  
 * +   D30  =  (20,-10)
 *  
 * +   x    =  无效
 *  
 * +   A1A   =  无效
 *  
 * +   B10A11   =  无效
 *  
 * +  一个空 不影响
 *  
 * +   A10  =  (10,-10)
 *  
 *  
 *  
 * 结果 （10， -10）
 * 
 * 
 * 输入描述:
 *     一行字符串
 * 
 * 
 * 输出描述:
 *     最终坐标，以,分隔
 * 
 * 输入例子:
 * A10;S20;W10;D30;X;A1A;B10A11;;A10;
 * 
 * 输出例子:
 *     10,-10
 * 
 *********************************************************/
// something wrong

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;


int main()
{
    string str;
    while (getline(cin, str)) {
        vector<string> ops;
        string op;

        string::iterator begin, end, pos;
        begin = str.begin(); end = str.end();
        for (pos = begin; pos != end; ++pos) {
            if (*pos != ';') {
                op.push_back(*pos);
            } else {
                //if (op.size() > 0 && op.size() < 4 && regex_match(op, "[ADWS][0-9]*"))
                if (op.size() > 0 && op.size() < 4)
                    ops.push_back(op);
                op.clear();
            }
        }

        int x = 0, y = 0;

        vector<string>::iterator opsBegin, opsEnd, opsPos;
        opsBegin = ops.begin(); opsEnd = ops.end();
        int offset = 0;
        for (opsPos = opsBegin; opsPos != opsEnd; ++opsPos) {
            switch ((*opsPos)[0]) {
            case 'A': 
                offset = stoi((*opsPos).substr(1, (*opsPos).size() - 1));
                x -= offset;
                break;
            case 'D': 
                offset = stoi((*opsPos).substr(1, (*opsPos).size() - 1));
                x += offset;
                break;
            case 'W': 
                offset = stoi((*opsPos).substr(1, (*opsPos).size() - 1));
                y += offset;
                break;
            case 'S': 
                offset = stoi((*opsPos).substr(1, (*opsPos).size() - 1));
                y -= offset;
                break;
            default:
                break;
            }
            
        }
        ops.clear();
        op.clear();
        cout  << x << ',' << y << endl;
    }
}
