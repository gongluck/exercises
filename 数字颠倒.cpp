/*
����һ��������������������ַ�������ʽ�������
���򲻿��Ǹ���������������ֺ���0����������ʽҲ����0��������Ϊ100�������Ϊ001 
*/

#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;
    int n = 0;
    for(n=N%10,N/=10; N>0||n>0; n=N%10,N/=10)
    {
        std::cout << n;
    }
    std::cout << std::endl;
    
    return 0;
}