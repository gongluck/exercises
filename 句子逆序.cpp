/*
��һ��Ӣ������Ե���Ϊ��λ�����ŷš����硰I am a boy���������ŷź�Ϊ��boy a am I��
���е���֮����һ���ո����������г���Ӣ����ĸ�⣬���ٰ��������ַ�
*/

#include <iostream>
#include <stdio.h>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    size_t startp, endp;
    startp = endp = str.size();
    while (startp-- != 0)
    {
        if (str[startp] != ' ')
        {
            continue;
        }
        else if (endp-1 != startp)
        {
            printf("%.*s ", (int)(endp - startp -1), &str[startp+1]);
        }
        endp = startp;
    }
    printf("%.*s ", (int)(endp - startp - 1), &str[startp + 1]);

    return 0;
}