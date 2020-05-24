/*
数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。
*/

#include <iostream>
#include <map>

int main()
{
    std::map<int, int> m;
    int N = 0;
    std::cin >> N;
    int n = 0, v = 0;
    for(int i=0; i<N; ++i)
    {
        std::cin >> n;
        std::cin >> v;
        m[n] += v;
    }
    for(const auto& i : m)
    {
        std::cout << (i.first) << ' ' << (i.second) << std::endl;
    }
    
    return 0;
}