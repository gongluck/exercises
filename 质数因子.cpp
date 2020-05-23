/*
功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）
最后一个数后面也要有空格
*/

#include <iostream>

int main()
{
    long N = 0;
    std::cin >> N;
    
    int n = 0;
    for(int i=2; i<N;)
    {
        n = N%i;
        if(n == 0)
        {
            std::cout << i << ' ';
            N = N/i;
            i = 2;
        }
        else if(i==N/2)
        {
            std::cout << N << ' ';
            break;
        }
        else
        {
            ++i;
        }
    }
    
    return 0;
}