#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../include/StringUtils.hpp"

using namespace testing;

TEST(StringUitls, HeadForUpper) {
    ASSERT_THAT(stringutils::head("Abc"), Eq(std::string("A")));
}

TEST(StringUitls, HeadForLower) {
    ASSERT_THAT(stringutils::head("abc"), Eq(std::string("a")));
}

TEST(StringUitls, TailLower) {
    ASSERT_THAT(stringutils::tail("Abc"), Eq(std::string("bc")));
}

TEST(StringUitls, TailUpper) {
    ASSERT_THAT(stringutils::tail("ABC"), Eq(std::string("BC")));
}

TEST(StringUitls, TailMixed) {
    ASSERT_THAT(stringutils::tail("AbcDEfG"), Eq(std::string("bcDEfG")));
}

TEST(StringUitls, ZeroPad) {
    ASSERT_THAT(stringutils::zeroPad("Abc", 5), Eq(std::string("Abc00")));
}

TEST(StringUtils, UpperFront) {
    ASSERT_THAT(stringutils::upperFront("abc"), Eq("A"));
}