#include <gtest/gtest.h>

#include "Main.h"

TEST(SpecializationTest, typeIntTest)
{
    int obj = 7;
    std::vector<float> vect = {7, 9, 3};
    TemplateClass<int> templateObj(obj, 0, vect);
    ASSERT_EQ(templateObj.foo(), true);
}

TEST(SpecializationTest, typeDoubleTest)
{
    double obj = 7.0;
    std::vector<float> vect = {7, 9, 3};
    TemplateClass<double> templateObj(obj, 0, vect);
    ASSERT_EQ(templateObj.foo(), false);
}

TEST(MClass1Test, trueTest)
{
    MClass1 obj;
    std::vector<float> vect = {7, 9, 3};
    TemplateClass<MClass1> templateObj(obj, 9, vect);
    ASSERT_EQ(templateObj.foo(), true);
}

TEST(MClass1Test, falseTest)
{
    MClass1 obj;
    std::vector<float> vect = {7, 9, 3};
    TemplateClass<MClass1> templateObj(obj, -3, vect);
    ASSERT_EQ(templateObj.foo(), false);
}

TEST(MClass2Test, trueTest)
{
    MClass2 obj;
    std::vector<float> vect = {};
    TemplateClass<MClass2> templateObj(obj, 0, vect);
    ASSERT_EQ(templateObj.foo(), true);
}

TEST(MClass2Test, falseTest)
{
    MClass2 obj;
    std::vector<float> vect = {7, 9, 3};
    TemplateClass<MClass2> templateObj(obj, 0, vect);
    ASSERT_EQ(templateObj.foo(), false);
}

TEST(MClass3Test, trueTest)
{
    MClass3 obj;
    std::vector<float> vect = {7, 9, 3};
    TemplateClass<MClass3> templateObj(obj, -3, vect);
    ASSERT_EQ(templateObj.foo(), true);
}

TEST(MClass3Test, falseTest)
{
    MClass3 obj;
    std::vector<float> vect = {7, 9, 3};
    TemplateClass<MClass3> templateObj(obj, 9, vect);
    ASSERT_EQ(templateObj.foo(), false);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}