/*
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。注意是不同的字符 
*/

#include <iostream>
#include <set>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::set<int> charset;
    for(const auto& i : str)
    {
        if(i >= 0 && i <= 127)
        {
            charset.insert(i);
        }
    }
    std::cout << charset.size() << std::endl;
    
    return 0;
}