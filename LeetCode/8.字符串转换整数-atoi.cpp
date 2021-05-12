// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem8.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        bool abs = false;
        bool got = false;
        int out = 0;
        for(const auto& c : s)
        {
            switch(c)
            {
                case ' ':
                    if(got) return out;
                    break;
                case '-':
                    if(got) return out;
                    abs = true;
                    got = true;
                    break;
                case '+':
                    if(got) return out;
                    got = true;
                    break;
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    got = true;
                    if(out < INT_MIN/10 || (out==INT_MIN/10 && (c-'0')>=8)) return INT_MIN;
                    if(out > INT_MAX/10 || (out==INT_MAX/10 && (c-'0')>=8)) return INT_MAX;
                    if(out == 0)
                        out = (c-'0') * (abs?-1:1);
                    else
                        out = out*10 + (abs?'0'-c:c-'0');
                    break;
                default:
                    return out;
            }
        }
        return out;
    }
};
// @lc code=end

