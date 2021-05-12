/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;
        string out;
        for (int i = 0; i < numRows; ++i)
        {
            if (i < s.size())
                out.append(1, s[i]);

            int step1 = (numRows - 1 - i) * 2;
            int step2 = (i)*2;
            if (step1 == 0)
                step1 = step2;
            if (step2 == 0)
                step2 = step1;
            int n = 1;
            while (i + (step1 + step2) * (n - 1) + step1 < s.size())
            {
                out.append(1, s[i + (step1 + step2) * (n - 1) + step1]);
                if (i + (step1 + step2) * n < s.size())
                {
                    out.append(1, s[i + (step1 + step2) * n]);
                }
                ++n;
            }
        }
        return out;
    }
};
// @lc code=end
