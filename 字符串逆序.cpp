/*
将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。
*/

#include <iostream>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    
    for(auto it = str.rbegin(); it != str.rend(); ++it)
    {
        std::cout << *it;
    }
    
    return 0;
}