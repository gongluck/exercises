// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem3.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1) return s.size();

        int max = 0;
        bool charsets[256] = {false};
        int i,j;
        for(i=0; i<s.size()-1; ++i)
        {
            memset(charsets, 0, sizeof(charsets));
            charsets[s[i]] = true;
            for(j=i+1; j<s.size(); ++j)
            {
                if(charsets[s[j]])
                {
                    max = std::max(max, j-i);
                    memset(charsets, 0, sizeof(charsets));
                    break;
                }
                else
                {
                    charsets[s[j]] = true;
                }
            }
            if(j == s.size())
            {
                break;
            }
        }
        max = std::max(max, j-i);
        return max;
    }
};
// @lc code=end

