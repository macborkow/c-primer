#include <iostream>

int main()
{
    std::cout << "Pick two integers to multiply: " << std::endl;
    int x1 = 0, x2 = 0;
    std::cin >> x1 >> x2;
    std::cout << x1 << " * " << x2 << " = " << x1*x2 << std::endl; 
    return 0;
}