#include <iostream>
#include "addition.h"
#include "division.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "2/4 = " << division(2, 4) << endl;
    cout << "2+4 = " << addition(2, 4) << endl;
    return 0;
}
