// д��һ�����򣬽���һ���ַ�����Ȼ��������ַ�����ת����ַ��������ַ������Ȳ�����1000��

#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    for(auto it = str.rbegin(); it != str.rend(); ++it)
    {
        std::cout << *it;
    }
    
    return 0;
}