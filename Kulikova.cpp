#include "Kulikova.h"
#include <iostream>

int getKulikova()
{
    double x;
    std::cout << "vvedite õ: ";
    std::cin >> x;
    double y = x * x + x * x * x * x;
    //std::cout<< "y = "<<y<<std::endl;
    return y;
}