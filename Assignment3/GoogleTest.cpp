#include <gtest/gtest.h>
#include "Transformer.h"

TEST(Transformer, 100)
{
    Transformer _speed(45);
    _speed.set_speed();
    EXPECT_EQ(_speed.get_speed(), 100);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
