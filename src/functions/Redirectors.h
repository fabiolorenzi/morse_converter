#pragma once

#include <iostream>
#include <sstream>
#include "StringConverters.h"

void Welcome();
int ConversionQuestion();
std::string InputQuestion(int conversion_type);
void Response(int conversion_type, std::string value);