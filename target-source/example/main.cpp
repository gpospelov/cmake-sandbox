// Example demonstrates how to use out public API defined in fancyutils.h
// It is not possible to call methods from "coreututils.h"

#include <iostream>
#include "fancyutils.h"
//#include "coreutils.h" // <--- shouldn't be visible, belongs to private API

int main()
{
    std::cout << "Local example: Hello World! " << std::endl;
    std::cout << fancy::get_number()  << "\n";
    return 0;
}
