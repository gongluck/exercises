#include <iostream>

int main()
{
    std::string in;
    std::getline(std::cin, in);
    char w;
    std::cin.get(w);
    int count = 0;
    for(const auto& i : in)
    {
        if(std::toupper(i) == std::toupper(w))
        {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}