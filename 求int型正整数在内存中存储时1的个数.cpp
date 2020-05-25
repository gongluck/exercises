// 输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。 

#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    int count = 0;
    while(n != 0)
    {
        if(n & 1 == 1)
        {
            ++count;
        }
        n >>= 1;
    }
    std::cout << count << std::endl;
    
    return 0;
}