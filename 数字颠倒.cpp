/*
输入一个整数，将这个整数以字符串的形式逆序输出
程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001 
*/

#include <iostream>

int main()
{
    int N=0;
    std::cin >> N;
    
    while(N > 0)
    {
        std::cout << N%10;
        N /= 10;
    }
    
    return 0;
}