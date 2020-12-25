/*
输入一个字符串和一个整数k，截取字符串的前k个字符并输出
本题输入含有多组数据
输入描述:
第一行输入待截取的字符串
第二行输入一个正整数k，代表截取的长度
输出描述:
截取后的字符串
*/

#include <iostream>

int main()
{
    std::string str;
    int len = 0;
    while(std::cin >> str)
    {
        std::cin >> len;
        std::cout << str.substr(0, len) << std::endl;
    }
    
    return 0;
}