#include <iostream>
#include "VA.h"
#include "Mavrin_II.h"

int main()
{
    std::cout << "Hello UTS-M-2022!\n";
    std::cout << getVA() << std::endl;

    // Students code below
    float a;
    std::cout << "Hello I'm Alex Mavrin! Write a number\n";
    std::cin >> a;
    std::cout << getMavrin(a) << std::endl;
}