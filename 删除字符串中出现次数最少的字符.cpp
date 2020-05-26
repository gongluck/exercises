/*
 实现删除字符串中出现次数最少的字符，若多个字符出现次数一样，则都删除。输出删除这些单词后的字符串，字符串中其它字符保持原来的顺序。
注意每个输入文件有多组输入，即多个字符串用回车隔开
*/

#include <iostream>
#include <map>
#include <set>

int main()
{
    std::string str;
    while(std::cin >> str)
    {
        std::map<char, int> nums;
        for(const auto& i : str)
        {
            ++nums[i];
        }
        int minix = 1;
        for(const auto& i : nums)
        {
            minix = std::min(minix, i.second);
        }
        for(const auto& i : str)
        {
            if(nums[i] != minix)
            {
                std::cout << i;
            }
        }
        std::cout << std::endl;
    }
}