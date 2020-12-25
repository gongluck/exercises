/*
输入两个用字符串表示的整数，求它们所表示的数之和。
字符串的长度不超过10000。
本题含有多组样例输入。
*/

#include <iostream>

int main()
{
    std::string s1, s2;
    std::string result;
    while(std::cin >> s1 >> s2)
    {
        char ex = 0;
        for(auto it1 = s1.rbegin(), it2 = s2.rbegin();
           it1 != s1.rend() && it2 != s2.rend();
           ++it1, ++it2)
        {
            ex += *it1+*it2-'0';
            if(ex > '9')
            {
                ex -= 10;
                result.push_back(ex);
                ex = 1;
            }
            else
            {
                result.push_back(ex);
                ex = 0;
            }
        }
        
        if(s1.size() > s2.size())
        {
            for(int i=s1.size()-1-s2.size(); i>=0; --i)
            {
                ex += s1[i];
                if(ex > '9')
                {
                    ex -= 10;
                    result.push_back(ex);
                    ex = 1;
                }
                else
                {
                    result.push_back(ex);
                    ex = 0;
                }
            }
        }
        else if(s2.size() > s1.size())
        {
            for(int i=s2.size()-1-s1.size(); i>=0; --i)
            {
                ex += s2[i];
                if(ex > '9')
                {
                    ex -= 10;
                    result.push_back(ex);
                    ex = 1;
                }
                else
                {
                    result.push_back(ex);
                    ex = 0;
                }
            }
        }
        
        if(ex != 0)
        {
            result.push_back('1');
        }
        
        result.assign(result.rbegin(), result.rend());
        std::cout << result << std::endl;
        result.clear();
    }
    
    return 0;
}