// 给定n个字符串，请对n个字符串按照字典序排列。

#include <iostream>
#include <set>

int main()
{
    int n = 0;
    std::cin >> n;
    std::multiset<std::string> strset;
    std::string str;
    for(int i=0; i<n; ++i)
    {
        std::cin >> str;
        strset.insert(str);
    }
    for(const auto& i : strset)
    {
        std::cout << i << std::endl;
    }
    
    return 0;
}