/* Ronshin Vsevolod st132572@student.spbu.ru
Calculator like “MK 61/54” (using *+/-)
*/

#include <iostream>
#include <fstream>
#include <filesystem>
#include "Calc.cpp"

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
