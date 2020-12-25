/*
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
例如，对于字符串abaca而言，有a、b、c三种不同的字符，因此输出3。
*/

#include <iostream>
#include <set>

int main()
{
    std::string str;
    std::cin >> str;
    
    std::set<char> chars;
    for(const auto& i : str)
    {
        chars.insert(i);
    }
    std::cout << chars.size() << std::endl;
    
    return 0;
}