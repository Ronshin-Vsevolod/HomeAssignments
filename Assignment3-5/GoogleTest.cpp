/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Checking correctness of class hierarchy operation
*/

#include <gtest/gtest.h>

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

// Tests for class Transformer

TEST(TransformerTest, GetSpeedTest)
{
    Autobot transformer(50, "off", "Hands", 0);
    ASSERT_EQ(transformer.get_speed(), 50);
}

TEST(TransformerTest, GetEyesTest)
{
    Autobot transformer(50, "off", "Hands", 0);
    ASSERT_EQ(transformer.get_eyes(), "off");
}

TEST(TransformerTest, GetGuntypeTest)
{
    Autobot transformer(50, "off", "Hands", 0);
    ASSERT_EQ(transformer.get_guntype(), "Hands");
}

TEST(TransformerTest, GetAmmoTest)
{
    Autobot transformer(50, "off", "Hands", 0);
    ASSERT_EQ(transformer.get_ammo(), 0);
}

TEST(TransformerTest, FireTest)
{
    Autobot transformer(50, "off", "Hands", 1);
    ASSERT_TRUE(transformer.fire());
    ASSERT_EQ(transformer.get_ammo(), 0);
    ASSERT_FALSE(transformer.fire());
}

TEST(TransformerTest, JumpTest)
{
    Autobot transformer(50, "off", "Hands", 0);
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
    Autobot autobot(50, "purple", "Hands", 0);
    Decepticon decepticon(45, "purple", "Hands", 0);

    ASSERT_TRUE(autobot > decepticon);
}

TEST(OperatorTest, AutobotLessThanDinobot)
{
    Autobot autobot(50, "purple", "Hands", 0);
    Dinobot dinobot(60, "purple", "None", 0);

    ASSERT_TRUE(autobot < dinobot);
}

TEST(OperatorTest, DecepticonGreaterThanDecepticon)
{
    Decepticon decepticonFirst(55, "purple", "Hands", 0);
    Decepticon decepticonSecond(45, "purple", "Hands", 0);

    ASSERT_TRUE(decepticonFirst > decepticonSecond);
}

// Tests for changed operator <<


TEST(OperatorDoubleLessTest, AutobotTest)
{
    Autobot autobot(50,"blue","Hands",0);
    std::string expectedOutput = "Information: \nTransformer\nblue\nHands\n";

    std::ostringstream oss;
    oss << autobot;

    ASSERT_EQ(oss.str(), expectedOutput);
}

TEST(OperatorDoubleLessTest, DecepticonTest)
{
    Decepticon decepticon(50,"red","Hands",0);
    std::string expectedOutput = "Information: \nTransformer\nred\nHands\n";

    std::ostringstream oss;
    oss << decepticon;

    ASSERT_EQ(oss.str(), expectedOutput);
}

// Tests for virtual methods

TEST(VirtualMethodsTest, AutobotTransformTest)
{
    Autobot autobot;
    std::string expectedOutput = "method: transform \nclass: Autobot \n\n"; 

   ASSERT_EQ(autobot.transform(), expectedOutput);
}

TEST(VirtualMethodsTest, DecepticonOpenFireTest)
{
    Decepticon decepticon;
    std::string expectedOutput = "method: openFire \nclass: Decepticon \n\n"; 

   ASSERT_EQ(decepticon.openFire(), expectedOutput);
}

TEST(VirtualMethodsTest, DinobotUltaTest)
{
    Dinobot dinobot;
    std::string expectedOutput = "method: ulta \nclass: Dinobot \n\n"; 

   ASSERT_EQ(dinobot.ulta(), expectedOutput);
}

int Runner(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

