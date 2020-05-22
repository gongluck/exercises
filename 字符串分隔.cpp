/*
•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
*/

#include <iostream>
#include <string>
#include <memory.h>
#include <string.h>

int main()
{
    std::string str;
    char buf[9] = {0};
    while(std::cin >> str)
    {
        for(int i=0;i<str.size();i+=8)
        {
            memset(buf, '0', sizeof(buf)-1);
            strncpy(buf, str.c_str()+i, (str.size()-i) > 8 ? 8 : (str.size()-i));
            std::cout << buf << std::endl;
        }
    }
}