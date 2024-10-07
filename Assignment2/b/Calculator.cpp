/* Ronshin Vsevolod st132572@student.spbu.ru
Calculator like “MK 61/54” (using *+/-)
*/

#include <iostream>
#include <fstream>
#include <filesystem>
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

int main() {
    std::ifstream source;
    source.open("../source.bin",std::ios::binary|std::ios::in);
    if (source.is_open())
    {
        const int fsize = std::filesystem::file_size("../source.bin");
        char* data = new char[fsize];
        source.read(data, fsize);
        source.close();
        double result;
        std::cout<<data<<std::endl;

        Calc calculator;
        calculator.calculate(data, &result);
        std::cout << "Result: " << result << std::endl;

        delete[] data;
    }
    else
    {
        std::cerr<<"Error.The file cannot be opened"<<std::endl;
    }
    return 0;
}
