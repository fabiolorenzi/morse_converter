#include "StringConverters.h"

std::string FromEngToMorse(std::string english)
{
    Table table = Table();
    std::string converted;

    std::cout << english << std::endl;
    std::cout << english.length() << std::endl;
    
    for (int x {}; x < english.length(); ++x) {
        converted += table.GetValueFromVar(english[x]) + " ";
    };

    return converted;
}

std::string FromMorseToEng(std::string morse) {
    std::vector<std::string> letters;

    int start {};
    int end = morse.find(" ");
    while (end != -1) {
        letters.push_back(morse.substr(start, end - start));
        start = end + 1;
        end = morse.find(" ", start);
    };
    letters.push_back(morse.substr(start, end - start));

    for (int x {}; x < letters.size(); ++x) {
        std::cout << letters[x] << std::endl;
    };

    return " ";
}