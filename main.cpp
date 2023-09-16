#include <iostream>
#include "src/functions/StringConverters.h"

int main()
{
    std::cout << "Hello world" << std::endl;

    std::cout << FromEngToMorse("Hello world") << std::endl;

    return 0;
}