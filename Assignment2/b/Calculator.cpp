/* Ronshin Vsevolod st132572@student.spbu.ru
Calculator like “MK 61/54” (using *+/-)
*/

#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstring>

class Calc
{
public:
    int* mstack = new int[128];
    int top=0;

    void calculate(char* data, int* result)
    {
        //I'm still trying to write something workable here now
        *result=11;
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

        Calc calculator;
        calculator.calculate(data, &result);
        std::cout << "Result: " << result << std::endl; //Expected result: 30

        delete[] data;
    }
    else
    {
        std::cout<<"Error.The file cannot be opened"<<std::endl;
    }
    return 0;
}
