// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem10.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution
{
public:
bool isMatch(string s, string p)
{
	int sp = 0;
	int pp = 0;
	for (pp = 0; pp < p.size(); ++pp)
	{
		if (sp >= s.size())
			return false;
		if (p[pp] >= 'a' && p[pp] <= 'z')
		{
			if (pp < p.size() - 1 && p[pp + 1] == '*')
			{
				if (pp < p.size() - 2 && p[pp + 2] == p[pp])
				{
					auto c = p[pp];
					pp = pp + 2;
					while (pp < p.size() && p[pp]==c && sp < s.size() && s[sp] == c)
					{
						++sp;
						++pp;
					}
					while (sp < s.size() && s[sp] == c)
					{
						++sp;
					}
				}
				while (s[sp] == p[pp])
				{
					++sp;
				}
				++pp;
			}
			else
			{
				if (s[sp] == p[pp])
				{
					++sp;
				}
				else
				{
					return false;
				}
			}
		}
		else if (p[pp] == '.')
		{
			if (pp < p.size() - 1 && p[pp + 1] == '*')
			{
				if (pp < p.size() - 2)
				{
					if (p[pp + 2] > 'a' && p[pp + 2] < 'z')
					{
						while (sp < s.size() && s[sp] != p[pp + 2])
						{
							++sp;
						}
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				++sp;
			}
		}
	}
	if (sp < s.size()) return false;
	else return true;
}
};
// @lc code=end
