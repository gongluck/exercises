// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem5.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        string out;
        int max = 0;
        for(int i=0; i<s.size(); ++i)
        {
            for(int j=s.size()-1; i<j && j-i+1>max; --j)
            {
                int l = i;
                int r = j;
                while(l<=r && s[l] == s[r])
                {
                    ++l;
                    --r;
                }

                if(l>=r)
                {
                    int n = j-i+1;
                    if(n > max)
                    {
                        max = n;
                        out = s.substr(i, n);
                    }
                }
            }
        }
        if(s.size() > 0 && out.empty())
            return s.substr(0, 1);
        else
            return out;
    }
};
// @lc code=end

