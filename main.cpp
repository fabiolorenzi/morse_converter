#include <iostream>
#include "src/functions/Redirectors.h"

int main()
{
    Welcome();
    int conversion_type = ConversionQuestion();
    std::string value = InputQuestion(conversion_type);
    Response(conversion_type, value);

    return 0;
}