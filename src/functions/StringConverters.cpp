#include "StringConverters.h"

std::string FromEngToMorse(std::string english)
{
    Table table = Table();
    std::string converted;

    std::cout << english << std::endl;
    std::cout << english.length() << std::endl;
    
    for (int x {}; x < english.length(); ++x) {
        converted += table.GetKeyFromVar(english[x]) + " ";
    };

    return converted;
}