// 字符串最后一个单词的长度
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char in[5000] = { 0 };
    gets_s(in);
    int len = strlen(in);
    int n = 0;
    while (len > 0 && in[--len] != ' ')
    {
        ++n;
    }
    printf("%d", n);
    return 0;
}