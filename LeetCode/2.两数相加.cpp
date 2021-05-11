// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem2.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int esp = 0;
        ListNode* out = nullptr;
        ListNode* prev = nullptr;
        while(l1 && l2)
        {
            ListNode* node = (ListNode*)new ListNode;
            node->val = l1->val + l2->val + esp;
            if(node->val >= 10)
            {
                node->val -= 10;
                esp = 1;
            }
            else
            {
                esp = 0;
            }
            if(prev == nullptr)
            {
                prev = node;
                out = prev;
            }
            else
            {
                prev->next = node;
                prev = node;
            }

            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1)
        {
            ListNode* node = (ListNode*)new ListNode;
            node->val = esp + l1->val;
            if(node->val >= 10)
            {
                node->val -= 10;
                esp = 1;
            }
            else
            {
                esp = 0;
            }
            if(prev == nullptr)
            {
                prev = node;
                out = prev;
            }
            else
            {
                prev->next = node;
                prev = node;
            }
            l1 = l1->next;
        }
        while(l2)
        {
            ListNode* node = (ListNode*)new ListNode;
            node->val = esp + l2->val;
            if(node->val >= 10)
            {
                node->val -= 10;
                esp = 1;
            }
            else
            {
                esp = 0;
            }
            if(prev == nullptr)
            {
                prev = node;
                out = prev;
            }
            else
            {
                prev->next = node;
                prev = node;
            }
            l2 = l2->next;
        }

        if(esp)
        {
            ListNode* node = (ListNode*)new ListNode;
            node->val = esp;
            if(prev == nullptr)
            {
                prev = node;
                out = prev;
            }
            else
            {
                prev->next = node;
                prev = node;
            }
        }
        return out;
    }
};
// @lc code=end

