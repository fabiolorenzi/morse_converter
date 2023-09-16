#include "StringConverters.h"

std::string FromEngToMorse(std::string english)
{
    Table table = Table();
    std::string converted;
    
    for (int x {}; x < english.length(); ++x) {
        converted += table.GetValueFromVar(english[x]) + " ";
    };

    return converted;
}

std::string FromMorseToEng(std::string morse) {
    Table table = Table();
    std::vector<std::string> letters;

    int start {};
    int end = morse.find(" ");
    while (end != -1) {
        letters.push_back(morse.substr(start, end - start));
        start = end + 1;
        end = morse.find(" ", start);
    };
    letters.push_back(morse.substr(start, end - start));

    std::string converted;
    bool isCapital = true;

    for (int x {}; x < letters.size(); ++x) {
        char temp = table.GetValueFromMorse(letters[x]);

        if (isCapital && isgraph(temp)) {
            temp = toupper(temp);
            isCapital = false;
        };

        if (temp == '.') {
            isCapital = true;
        };

        converted.append(1, temp);
    };

    return converted;
}