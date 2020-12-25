/*
Lily上课时使用字母数字图片教小朋友们学习英语单词，每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。请大家给Lily帮忙，通过C语言解决。
本题含有多组样例输入。
输入描述:
Lily使用的图片包括"A"到"Z"、"a"到"z"、"0"到"9"。输入字母或数字个数不超过1024。

输出描述:
Lily的所有图片按照从小到大的顺序输出

示例1
输入
Ihave1nose2hands10fingers
输出
0112Iaadeeefghhinnnorsssv
*/

#include <stdio.h>

int main()
{
    char input[1025] = {0};
    int count[127] = {0};
    int len;

    while (scanf("%s", input) == 1)
    {
        len = strlen(input);
        
        for (int i = 0; i < len; ++i)
        {
            ++count[input[i]];
        }
        for(int i=0; i< 127; ++i)
        {
            for(int j=0; j<count[i]; ++j)
            {
                putchar(i);
            }
            count[i] = 0;
        }
        putchar('\n');
    }

    return 0;
}