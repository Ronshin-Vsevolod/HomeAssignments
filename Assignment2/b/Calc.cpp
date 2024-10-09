/* Ronshin Vsevolod st132572@student.spbu.ru
Calculator like “MK 61/54” (using *+/-)
*/
#include "Calc.h"

#include <iostream>
#include <sstream>

void Calc::add(double newnumb)
{
    if(top<2)
    {
        mstack[top++] = newnumb;
    }
    else
    {
        std::cerr<<"Error: Too many operands entered (max 2) \n";
        double temp=pop();
        pop();
        add(temp);
        add(newnumb);
    }
}
double Calc::pop()
{
    return mstack[--top];
}

Calc::Calc()
{
    mstack = new double[128];
}

Calc::~Calc()
{
    delete[] mstack;
}

void Calc::calculate(char* data, double* result)
{
    std::istringstream iss(data);
    std::string token;

    while (iss >> token)
    {
        if (isdigit(token[0]))
        {
            add(std::stod(token));
        }
        else
        {
            double b = pop();
            double a = pop();
            switch (token[0])
            {
                case '+':
                    add(a + b);
                    break;
                case '-':
                    add(a - b);
                    break;
                case '*':
                    add(a * b);
                    break;
                case '/':
                    add(a / b);
                    break;
                default:
                    std::cerr<<"Error: the program doesn't work with " << token << std::endl;
                    break;
            }
        }
    }
    *result=pop();
}

