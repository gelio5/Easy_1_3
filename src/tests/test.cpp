#include <gtest/gtest.h>
#include "../Sin.h"
#include <cmath>
#include <cstdlib>

TEST(Easy_1_3, absFromNegative)
{
    ASSERT_EQ(Abs(-1), 1);
    ASSERT_EQ(Abs(-1.5), 1.5);
}

TEST(Easy_1_3, absFromZero)
{
    ASSERT_EQ(Abs(0.0), 0);
    ASSERT_EQ(Abs(0),0);
}

TEST(Easy_1_3, absFromPositive)
{
    ASSERT_EQ(Abs(1), 1);
    ASSERT_EQ(Abs(7.5), 7.5);
}

TEST(Easy_1_3, sin)
{
    ASSERT_EQ(round(sin(0)*10000)/10000, round(Sin(0)*10000)/10000);
    ASSERT_EQ(round(sin(1)*10000)/10000, round(Sin(1)*10000)/10000);
    ASSERT_EQ(round(sin(2)*10000)/10000, round(Sin(2)*10000)/10000);
    ASSERT_EQ(round(sin(3)*10000)/10000, round(Sin(3)*10000)/10000);
    ASSERT_EQ(round(sin(4)*10000)/10000, round(Sin(4)*10000)/10000);
    ASSERT_EQ(round(sin(5)*10000)/10000, round(Sin(5)*10000)/10000);
    ASSERT_EQ(round(sin(6)*10000)/10000, round(Sin(6)*10000)/10000);
    ASSERT_EQ(round(sin(7)*10000)/10000, round(Sin(7)*10000)/10000);
    ASSERT_EQ(round(sin(-1.5)*10000)/10000, round(Sin(-1.5)*10000)/10000);
}

TEST(Easy_1_3, massiveSin)
{
    double val = -5.7908;
    while (val < 5.7909)
    {
        ASSERT_EQ(round(sin(val)*10000)/10000, round(Sin(val)*10000)/10000);
        val += 0.0001;
    }
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}