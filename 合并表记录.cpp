/*
���ݱ��¼��������������ֵ��int��Χ������������Ա�������ͬ�ļ�¼���кϲ���������ͬ��������ֵ����������㣬�������keyֵ������������
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