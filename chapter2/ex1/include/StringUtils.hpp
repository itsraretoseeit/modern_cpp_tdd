#pragma once

#include <string>

namespace stringutils {
    std::string zeroPad(const std::string& word, unsigned int toLength);
    std::string upperFront(const std::string& word);
    std::string head(const std::string& word);
    std::string tail(const std::string& word);
}