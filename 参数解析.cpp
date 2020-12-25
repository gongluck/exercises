/*
在命令行输入如下命令：
xcopy /s c:\ d:\，
各个参数如下： 
参数1：命令字xcopy 
参数2：字符串/s
参数3：字符串c:\
参数4: 字符串d:\
请编写一个参数解析程序，实现将命令行各个参数解析出来。
解析规则： 
1.参数分隔符为空格 
2.对于用“”包含起来的参数，如果中间有空格，不能解析为多个参数。比如在命令行输入xcopy /s “C:\program files” “d:\”时，参数仍然是4个，第3个参数应该是字符串C:\program files，而不是C:\program，注意输出参数时，需要将“”去掉，引号不存在嵌套情况。
3.参数不定长 
4.输入由用例保证，不会出现不符合要求的输入 
*/

#include <iostream>
#include <vector>

int main()
{
    std::string str;
    std::getline(std::cin, str);

    std::vector<std::string> result;
    bool flag = false; //"
    std::string tmp;
    for (const auto &i : str)
    {
        if ((i == ' ' && !flag) || (i == '\"' && flag))
        {
            flag = false;
            if (tmp.size() != 0)
            {
                result.push_back(tmp);
                tmp.clear();
            }
        }
        else if (i != '\"') //非空格 非引号
        {
            tmp += i;
        }
        else //非空格 引号 flag==false
        {
            flag = true;
        }
    }

    if (tmp.size() != 0)
    {
        result.push_back(tmp);
    }

    std::cout << result.size() << std::endl;
    for (const auto &i : result)
    {
        std::cout << i << std::endl;
    }
}