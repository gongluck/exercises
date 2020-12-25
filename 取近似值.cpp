/*
写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。 
*/

#include <iostream>

int main()
{
    double N = 0.0;
    std::cin >> N;
    std::cout << static_cast<int>(N+0.5);
    
    return 0;
}