#include "gtest/gtest.h"
#include "../Calculator.h"

struct Tester
: testing::Test
{
    Calculator* c = new Calculator();
};

TEST_F(Tester, add) {
//    Calculator* c = new Calculator();
    for (int i = 0; i < 100; i++)
    {
        int r1 = rand() % 100000;
        int r2 = rand() % 100000;
        EXPECT_EQ(r1 + r2, c->add(r1,r2));

    }
}

TEST(FloatTest, LowNumbers) {
    Calculator* c = new Calculator();
    EXPECT_DOUBLE_EQ(32.32+43.56, c->add(32.32,43.56));
}