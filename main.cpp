#include <iostream>
#include "src/functions/StringConverters.h"

int main()
{
    std::cout << "Hello world" << std::endl;

    std::cout << FromEngToMorse("Hello") << std::endl;

    return 0;
}