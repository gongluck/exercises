// д��һ�����򣬽���һ��ʮ�����Ƶ������������ֵ��ʮ���Ʊ�ʾ��������ͬʱ���� ��
#include <iostream>

int main()
{
    std::string in;
    int len = 0;
    int n = 0;
    int tmp = 0;
    while(std::getline(std::cin, in))
    {
        n = 0;
        len = in.size();
        for(int i=0; i<len;++i)
        {
            tmp = std::toupper(in[len-1-i]);
            if(tmp == 'X')
            {
                break;
            }
            else if(tmp >= 'A' && tmp < 'X')
            {
                n += (tmp - 'A' + 10) << (4*i);
            }
            else
            {
                n += (tmp - '0') << (4*i);
            }
        }
        std::cout << n << std::endl;
    }
    
    return 0;
}