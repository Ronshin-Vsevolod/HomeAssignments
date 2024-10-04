/* Ronshin Vsevolod st132572@student.spbu.ru
Calculator like “MK 61/54” (using *+/-)
*/

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <stack>

int main(int argc, char** argv)
{
    std::stack<int> numbers;
    std::ifstream infile;
    infile.open("../source.bin",std::ios::binary|std::ios::in);
    if (infile.is_open())
    {
        const int fsize = std::filesystem::file_size("../source.bin");


        infile.close();
    }
    else
    {
        std::cout<<"Error.The file cannot be opened"<<std::endl;
    }
    return 0;
}
