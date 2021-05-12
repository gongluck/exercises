/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
        char nums[10] = {0};
        int n = 0;
        while(x>0)
        {
            nums[n++] = x%10;
            x /= 10;
        }
        for(int i=0;i<n/2;++i)
        {
            if(nums[i] != nums[n-i-1])
                return false;
        }
        return true;
    }
};
// @lc code=end

