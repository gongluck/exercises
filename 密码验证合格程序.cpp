/*
密码要求:
1.长度超过8位
2.包括大小写字母.数字.其它符号,以上四种至少三种
3.不能有相同长度超2的子串重复
*/

#include <iostream>

int main()
{
    std::string str;
    while(std::getline(std::cin, str))
    {
        //std::cout << str << std::endl;
        if(str.size() <= 8)
        {
            std::cout << "NG" << std::endl;
            continue;
        }
        
        bool OK = false;
        int up = 0, low = 0, digi = 0, other = 0;
        for(const auto& i : str)
        {
            if(i >= 'a' && i <= 'z')
            {
                low = 1;
            }
            else if(i >= 'A' && i <= 'Z')
            {
                up = 1;
            }
            else if(i >= '0' && i <= '9')
            {
                digi = 1;
            }
            else
            {
                other = 1;
            }
            
            if((up+low+digi+other) >= 3)
            {
                OK = true;
                break;
            }
        }
        if(!OK)
        {
            std::cout << "NG" << std::endl;
            continue;
        }
        
        for(int i =0; i<str.size()-5; ++i)
        {
            for(int j=i+3; j<str.size()-2; ++j)
            {
                if(str[i] == str[j] && 
                  str[i+1] == str[j+1] && 
                  str[i+2] == str[j+2])
                {
                    OK = false;
                    i = str.size();
                    break;
                }
            }
        }
        
        if(!OK)
        {
            std::cout << "NG" << std::endl;
        }
        else
        {
            std::cout << "OK" << std::endl;
        }
    }
    
    return 0;
}