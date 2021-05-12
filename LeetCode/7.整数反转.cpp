// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem7.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int out = 0;
        int n = 0;
        int64_t tmp = 0;
        while(x != 0)
        {
            if(out > INT_MAX/10 || out < INT_MIN/10) return 0;
            n = x%10;
            x /= 10;
            out = out*10 + n;
        }

        return out;
    }
};
// @lc code=end

