/*
��дһ�������������ַ����к��еĲ�ͬ�ַ��ĸ������ַ���ACSII�뷶Χ��(0~127)�����б�ʾ���������������ַ�����ڷ�Χ�ڵĲ���ͳ�ơ�ע���ǲ�ͬ���ַ� 
*/

#include <iostream>
#include <set>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::set<int> charset;
    for(const auto& i : str)
    {
        if(i >= 0 && i <= 127)
        {
            charset.insert(i);
        }
    }
    std::cout << charset.size() << std::endl;
    
    return 0;
}