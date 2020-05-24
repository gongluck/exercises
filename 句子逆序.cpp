/*
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
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