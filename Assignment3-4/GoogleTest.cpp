/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Checking correctness of class hierarchy operation
*/

#include <gtest/gtest.h>
#include <sstream>

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

// Tests for class Transformer

TEST(TransformerTest, GetSpeedTest)
{
    Transformer transformer(50, "off", "Hands", 0);
    ASSERT_EQ(transformer.get_speed(), 50);
}

TEST(TransformerTest, GetEyesTest)
{
    Transformer transformer(50, "off", "Hands", 0);
    ASSERT_EQ(transformer.get_eyes(), "off");
}

TEST(TransformerTest, GetGuntypeTest)
{
    Transformer transformer(50, "off", "Hands", 0);
    ASSERT_EQ(transformer.get_guntype(), "Hands");
}

TEST(TransformerTest, GetAmmoTest)
{
    Transformer transformer(50, "off", "Hands", 0);
    ASSERT_EQ(transformer.get_ammo(), 0);
}

TEST(TransformerTest, FireTest)
{
    Transformer transformer(50, "off", "Hands", 1);
    ASSERT_TRUE(transformer.fire());
    ASSERT_EQ(transformer.get_ammo(), 0);
    ASSERT_FALSE(transformer.fire());
}

TEST(TransformerTest, JumpTest)
{
    Transformer transformer;
    ASSERT_TRUE(transformer.jump());
}

// Tests for class Autobot

TEST(AutobotTest, ConstructorTest)
{
    Autobot autobot;
    ASSERT_EQ(autobot.get_speed(), 50);
    ASSERT_EQ(autobot.get_eyes(), "purple");
    ASSERT_EQ(autobot.get_guntype(), "Hands");
    ASSERT_EQ(autobot.get_ammo(), 0);
}

TEST(AutobotTest, CheerTest)
{
    Autobot autobot;
    ASSERT_EQ(autobot.cheer(), "Egegei XD \n");
}

TEST(AutobotTest, SetSpeedAfterburnerTest)
{
    Autobot autobot;
    autobot.set_speedAfterburner();
    ASSERT_EQ(autobot.get_speed(), 100);
}

TEST(AutobotTest, SetEyesTest)
{
    Autobot autobot;
    autobot.set_eyes();
    ASSERT_EQ(autobot.get_eyes(), "blue");
}

TEST(AutobotTest, SetGuntypeTest)
{
    Autobot autobot;
    autobot.set_guntype();
    ASSERT_EQ(autobot.get_guntype(), "Laser");
}

TEST(AutobotTest, SetAmmoTest)
{
    Autobot autobot;
    autobot.set_ammo();
    ASSERT_EQ(autobot.get_ammo(), 30);
}

// Tests for class Decepticon

TEST(DecepticonTest, ConstructorTest)
{
    Decepticon decepticon;
    ASSERT_EQ(decepticon.get_speed(), 50);
    ASSERT_EQ(decepticon.get_eyes(), "purple");
    ASSERT_EQ(decepticon.get_guntype(), "Hands");
    ASSERT_EQ(decepticon.get_ammo(), 0);
}

TEST(DecepticonTest, CheerTest)
{
    Decepticon decepticon;
    ASSERT_EQ(decepticon.cheer(), "Ululu! 8P \n");
}

TEST(DecepticonTest, SetSpeedAfterburnerTest)
{
    Decepticon decepticon;
    decepticon.set_speedAfterburner();
    ASSERT_EQ(decepticon.get_speed(), 110);
}

TEST(DecepticonTest, SetEyesTest)
{
    Decepticon decepticon;
    decepticon.set_eyes();
    ASSERT_EQ(decepticon.get_eyes(), "red");
}

TEST(DecepticonTest, SetGuntypeTest)
{
    Decepticon decepticon;
    decepticon.set_guntype();
    ASSERT_EQ(decepticon.get_guntype(), "Energy cannon");
}

TEST(DecepticonTest, SetAmmoTest)
{
    Decepticon decepticon;
    decepticon.set_ammo();
    ASSERT_EQ(decepticon.get_ammo(), 10);
}

// Tests for class Dinobot

TEST(DinobotTest, ConstructorTest)
{
    Dinobot dinobot;
    ASSERT_EQ(dinobot.get_speed(), 60);
    ASSERT_EQ(dinobot.get_eyes(), "purple");
    ASSERT_EQ(dinobot.get_guntype(), "None");
    ASSERT_EQ(dinobot.get_ammo(), 0);
}

TEST(DinobotTest, CheerTest)
{
    Dinobot dinobot;
    ASSERT_EQ(dinobot.cheer(), "Rooooaaar! \n");
}

TEST(DinobotTest, SetSpeedAfterburnerTest)
{
    Dinobot dinobot;
    dinobot.set_speedAfterburner();
    ASSERT_EQ(dinobot.get_speed(), 105);
}

TEST(DinobotTest, SetEyesTest)
{
    Dinobot dinobot;
    dinobot.set_eyes();
    ASSERT_EQ(dinobot.get_eyes(), "green");
}

TEST(DinobotTest, SetGuntypeTest)
{
    Dinobot dinobot;
    dinobot.set_guntype();
    ASSERT_EQ(dinobot.get_guntype(), "Jaw");
}

TEST(DinobotTest, SetAmmoTest)
{
    Dinobot dinobot;
    dinobot.set_ammo();
    ASSERT_EQ(dinobot.get_ammo(), 1724);
}

// Tests for changed operators >, <

TEST(OperatorTest, AutobotGreaterThanDecepticon)
{
    Autobot autobot(100);
    Decepticon decepticon(50);

    ASSERT_TRUE(autobot > decepticon);
    ASSERT_FALSE(decepticon > autobot);
}

TEST(OperatorTest, AutobotLessThanDinobot)
{
    Autobot autobot(50);
    Dinobot dinobot(100);

    ASSERT_TRUE(autobot < dinobot);
    ASSERT_FALSE(dinobot < autobot);
}

// Tests for changed operator <<

/*TEST(TransformerTest, OperatorDoubleLessTest)
{
    Transformer examplebot(50,"off","Hands",0);
    std::string expectedOutput = "Information: \nTransformer\n50\noff\nHands\n0\n";

    std::stringstream output;
    output << examplebot;

    ASSERT_EQ(output.str(), expectedOutput);
}
*/
/*
TEST(TransformerTest, OutputStream) {
    Transformer transformer;
    std::ostringstream oss;
    oss << transformer;
    std::string expected_output = "Information:\nTransformer\n50\noff\nHands\n0\n";
    ASSERT_EQ(oss.str(), expected_output);
}
*/
int Runner(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

