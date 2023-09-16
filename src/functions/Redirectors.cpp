#include "Redirectors.h"

void Welcome()
{
    std::cout << std::endl;
    std::cout << "/*-------------------------------------------------*/" << std::endl;
    std::cout << "///" << std::endl;
    std::cout << "///" << std::endl;
    std::cout << "///" << std::endl;
    std::cout << "Welcome to Morse Converter!" << std::endl;
    std::cout << "Developed by F.Lorenzi" << std::endl;
    std::cout << "///" << std::endl;
    std::cout << "///" << std::endl;
    std::cout << "///" << std::endl;
    std::cout << "/*-------------------------------------------------*/" << std::endl;
    std::cout << std::endl;
}

int ConversionQuestion()
{
    int conversion_type {};

    std::cout << std::endl;
    std::cout << "We are currently supporting this conversions:" << std::endl;
    std::cout << std::endl;
    std::cout << "0: Eng   -> Morse" << std::endl;
    std::cout << "1: Morse -> Eng" << std::endl;
    std::cout << std::endl;
    std::cout << "Please insert the number of the conversion required: ";
    std::cin >> conversion_type;
    std::cout << std::endl;
    return conversion_type;
}

std::string InputQuestion(int conversion_type)
{
    std::string value;

    std::cout << std::endl;
    
    if (conversion_type == 0) {
        std::cout << "Please enter the english sentence to convert in morse: " << std::endl;
    } else {
        std::cout << "Please enter the morse code to convert in english: " << std::endl;
    };

    std::cin.ignore();
    std::getline(std::cin, value);

    std::cout << std::endl;

    return value;
}

void Response(int conversion_type, std::string value)
{
    std::cout << std::endl;

    if (conversion_type == 0) {
        std::cout << "The result from english to morse is:" << std::endl;
        std::cout << FromEngToMorse(value);
    } else {
        std::cout << "The result from morse to english is:" << std::endl;
        std::cout << FromMorseToEng(value) << std::endl;
    };

    std::cout << std::endl;
}