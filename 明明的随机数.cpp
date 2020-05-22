#include <iostream>
#include <set>

int main()
{
    std::set<int> nums;
    int tmp = 0;
    int N = 0;
    while (std::cin >> N)
    {
        nums.clear();
        for (int i = 0; i < N; ++i)
        {
            std::cin >> tmp;
            nums.insert(tmp);
        }
        for (const auto& i : nums)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}