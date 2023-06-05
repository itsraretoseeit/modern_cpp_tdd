#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../include/CharUtils.hpp"

using namespace testing;

TEST(CharUtils, VowelIsCorrectlyRecognized) {
    ASSERT_THAT(charutils::isVowel('a'), Eq(true));
}

TEST(CharUtils, NotAVowel) {
    ASSERT_THAT(charutils::isVowel('b'), Eq(false));
}

TEST(CharUtils, UppercaseVowelIsCorrectlyHandled) {
    ASSERT_THAT(charutils::isVowel('A'), Eq(true));
}

TEST(CharUtils, UppercaseNotAVowel) {
    ASSERT_THAT(charutils::isVowel('V'), Eq(false));
}

TEST(CharUtils, UpperToLower) {
    ASSERT_THAT(charutils::lower('A'), Eq('a'));
}

TEST(CharUtils, LowerToLower) {
    ASSERT_THAT(charutils::lower('v'), Eq('v'));
}

TEST(CharUtils, LowerToUpper) {
    ASSERT_THAT(charutils::upper('v'), Eq('V'));
}

TEST(CharUtils, UpperToUpper) {
    ASSERT_THAT(charutils::upper('C'), Eq('C'));
}