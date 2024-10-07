/* Ronshin Vsevolod st132572@student.spbu.ru
Calculator like “MK 61/54” (using *+/-)
*/

#include <iostream>
#include <cstring>
#include <sstream>

class Calc
{
public:
    double* mstack = new double[128];
    int top=0;

    void add(double newnumb)
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
    double pop()
    {
        return mstack[--top];
    }

    void calculate(char* data, double* result)
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
        delete[] mstack;
    }
};
