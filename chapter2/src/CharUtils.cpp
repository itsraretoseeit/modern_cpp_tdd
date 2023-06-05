#include "../include/CharUtils.hpp"

namespace charutils {
    bool isVowel(char c) {
        return std::string("aeiouy").find(std::tolower(c)) != std::string::npos;
    }

    char upper(char c) {
        return std::toupper(static_cast<unsigned char>(c));
    }

    char lower(char c) {
        return std::tolower(static_cast<unsigned char>(c));
    }
}