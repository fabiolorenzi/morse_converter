#include <iostream>
#include "src/functions/StringConverters.h"

int main()
{
    //std::cout << "Hello world" << std::endl;

    //std::cout << FromEngToMorse("Hello world") << std::endl;
    std::cout << FromEngToMorse("Hello. My name is Fabio") << std::endl;
    std::cout << FromMorseToEng(".... . .-.. .-.. --- .-.-.- / -- -.-- / -. .- -- . / .. ... / ..-. .- -... .. ---") << std::endl;

    return 0;
}