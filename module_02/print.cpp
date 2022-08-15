#include "print.h"

void Display(float num1, float num2, std::string type)
{
    if (type == "div")
        std::cout << "2/4 = " << division(2, 4) << std::endl;
    else
        std::cout << "2+4 = " << addition(2, 4) << std::endl;
}
