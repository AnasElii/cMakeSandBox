#include <iostream>

#include "myMath/addition.h"
#include "myMath/division.h"
#include "myPrint/print.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Display(2, 4, division(2, 4), "div");
    Display(2, 4, addition(2, 4), "");
    return 0;
}
