// 写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）

#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    for(auto it = str.rbegin(); it != str.rend(); ++it)
    {
        std::cout << *it;
    }
    std::cout << std::endl;
    
    return 0;
}