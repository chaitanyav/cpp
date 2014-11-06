#include "fraction.h"
#include <gtest/gtest.h>

TEST(FractionTest, Add1) {
  Fraction a(1, 2);
  Fraction b(1, 4);
  Fraction c = a.add(b);
  EXPECT_STREQ("6 / 8", c.toString().c_str());
}

TEST(FractionTest, Add2) {
  Fraction a(-1, 2);
  Fraction b(1, 4);
  Fraction c = a.add(b);
  EXPECT_STREQ("-2 / 8", c.toString().c_str());
}

TEST(FractionTest, Add3) {
  Fraction a;
  Fraction b;
  Fraction c = a.add(b);
  EXPECT_STREQ("2 / 1", c.toString().c_str());
}

TEST(FractionTest, Subtract1) {
  Fraction a;
  Fraction b;
  Fraction c = a.subtract(b);
  EXPECT_STREQ("0 / 1", c.toString().c_str());
}

TEST(FractionTest, Subtract2) {
  Fraction a(1, 2);
  Fraction b(1, 4);
  Fraction c = a.subtract(b);
  EXPECT_STREQ("2 / 8", c.toString().c_str());
}

TEST(FractionTest, Multiply) {
  Fraction a(1, 2);
  Fraction b(1, 4);
  Fraction c = a.multiply(b);
  EXPECT_STREQ("1 / 8", c.toString().c_str());
}

TEST(FractionTest, Divide) {
  Fraction a(1, 2);
  Fraction b(1, 4);
  Fraction c = a.divide(b);
  EXPECT_STREQ("4 / 2", c.toString().c_str());
}
