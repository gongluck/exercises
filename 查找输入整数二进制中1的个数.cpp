/*
输入一个正整数，计算它在二进制下的1的个数。
*/

#include <iostream>

int main()
{
    int n;
    int count = 0;
    while (std::cin >> n)
    {
        while (n)
        {
            if (n & 1)
            {
                ++count;
            }
            n = n >> 1;
        }
        std::cout << count << std::endl;
        count = 0;
    }

    return 0;
}