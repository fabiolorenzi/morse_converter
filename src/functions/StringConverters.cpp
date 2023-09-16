#include "StringConverters.h"

std::string FromEngToMorse(std::string english)
{
    Table table = Table();
    std::cout << english[1] << std::endl;
    std::cout << table.GetKeyFromVar(english[0]) << std::endl;
    
    return table.a;
}