// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem4.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int all = nums1.size() + nums2.size();
        int target = all / 2;
        int i=0, j=0;
        if (all % 2 != 0)
        {
            while (i < nums1.size() && j < nums2.size() && nums1.size() > 0 && nums2.size() > 0)
            {
                if (i + j == target)
                {
                    return std::min(nums1[i], nums2[j]);
                }
                if (nums1[i] < nums2[j])
                {
                    ++i;
                }
                else
                {
                    ++j;
                }
            }

            if (i >= nums1.size())
            {
                return nums2[target - i];
            }
            else
            {
                return nums1[target - j];
            }
        }
        else
        {
            int num1 = -1, num2 = -1;
            while (i < nums1.size() && j < nums2.size() && nums1.size() > 0 && nums2.size() > 0)
            {
                if (num1 == -1 && (i + j == target - 1))
                {
                    num1 = std::min(nums1[i], nums2[j]);
                }
                else if (num2 == -1 && (i + j == target))
                {
                    return (num1 + std::min(nums1[i], nums2[j])) / 2.0;
                }
                
                if (nums1[i] < nums2[j])
                {
                    ++i;
                }
                else
                {
                    ++j;
                }
            }

            if (i >= nums1.size())
            {
                if (num1 == -1)
                {
                    return (nums2[target - i] + nums2[target - i - 1]) / 2.0;
                }
                else
                {
                    return (num1 + nums2[target - i]) / 2.0;
                }
            }
            else
            {
                if (num1 == -1)
                {
                    return (nums1[target - j] + nums1[target - j - 1]) / 2.0;
                }
                else
                {
                    return (num1 + nums1[target - j]) / 2.0;
                }
            }
        }
	}
};
// @lc code=end

