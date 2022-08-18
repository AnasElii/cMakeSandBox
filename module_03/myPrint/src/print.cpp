#include "myPrint/print.h"

void Display(float num1, float num2, float result, std::string type)
{
    if (type == "div")
        std::cout << num1 << " / " << num2 << " = " << result << std::endl;
    else
        std::cout << num1 << " + " << num2 << " = " << result << std::endl;
}
