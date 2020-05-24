// 输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;
    int n = 0;
    bool used[10] = {false};
    for(n=N%10,N/=10; n!=0 || N>0; n=N%10,N/=10)
    {
        if(!used[n])
        {
            std::cout << n;
            used[n] = true;
        }
    }
    
    return 0;
}