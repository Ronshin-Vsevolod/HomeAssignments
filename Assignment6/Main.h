#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <vector>

template <typename MType>
class TemplateClass
{
private:
    MType value;
    int number;
    std::vector<float> vect;
public:
    TemplateClass(const MType& initValue, int num, const std::vector<float>& vec): 
    value(initValue), number(num), vect(vec) {}
    bool foo()
    {
        return value.bar(number, vect);
    }
};

template<>
class TemplateClass<int>
{
private:
    int value;
    int number;
    std::vector<float> vect;
public:
    TemplateClass(const int& initValue, int num, const std::vector<float>& vec): 
    value(initValue), number(num), vect(vec) {}
    bool foo()
    {
        return true;
    }
};

template<>
class TemplateClass<double>
{
private:
    double value;
    int number;
    std::vector<float> vect;
public:
    TemplateClass(const double& initValue, int num, const std::vector<float>& vec): 
    value(initValue), number(num), vect(vec) {}
    bool foo()
    {
        return false;
    }
};

class MClass1
{
public:
    bool bar(int number, std::vector<float>& vect)
    {
        return (number > 0);
    }
    int c_1_1()
    {
        return 1;
    }
    float c_1_2()
    {
        return 1.1;
    }
    void c_1_3()
    {
        std::cout<<"one"<<std::endl;
    }
};

class MClass2
{
public:
    bool bar(int number, std::vector<float>& vect)
    {
        return (!vect.empty());
    }
    int c_2_1()
    {
        return 2;
    }
    float c_2_2()
    {
        return 2.2;
    }
    void c_2_3()
    {
        std::cout<<"two"<<std::endl;
    }
};

class MClass3
{
public:
    bool bar(int number, std::vector<float>& vect)
    {
        return (number == -static_cast<int>(vect.size()));
    }
    int c_3_1()
    {
        return 3;
    }
    float c_3_2()
    {
        return 3.3;
    }
    void c_3_3()
    {
        std::cout<<"three"<<std::endl;
    }
};

#endif