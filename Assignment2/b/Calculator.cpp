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
    int* mstack = new int[128];
    int top=0;

    void add(int newnumb)
    {
        if(top<2)
        {
            mstack[top++] = newnumb;
        }
        else
        {
            int temp=pop();
            pop();
            add(temp);
            add(newnumb);
        }
    }
    int pop()
    {
        return mstack[--top];
    }

    void calculate(char* data, int* result)
    {
        std::istringstream iss(data);
        std::string token;

        while (iss >> token)
        {
            if (isdigit(token[0]))
            {
                add(std::stoi(token));
            }
            else
            {
                int b = pop();
                int a = pop();
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
                        std::cout<<"Error: the program doesn't work with " << token << std::endl;
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
        int result;
        std::cout<<data<<std::endl;
        data[fsize] = '\0';

        Calc calculator;
        calculator.calculate(data, &result);
        std::cout << "Result: " << result << std::endl;

        delete[] data;
    }
    else
    {
        std::cout<<"Error.The file cannot be opened"<<std::endl;
    }
    return 0;
}
