/*
����:����һ�������������մ�С�����˳������������������ӣ��ظ���ҲҪ�о٣�����180��������Ϊ2 2 3 3 5 ��
���һ��������ҲҪ�пո�
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