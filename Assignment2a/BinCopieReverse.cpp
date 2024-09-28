/* Ronshin Vsevolod st132572@student.spbu.ru
Assignment in progress...
*/
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

int main(int argc, char** argv)
{
    std::ifstream infile;
    infile.open("Data.pdf",std::ios::binary|std::ios::in);
    std::cout<<"File size: "<<std::filesystem::file_size("/home/vsevolod-ronshin/HomeAssignments/Assignment2a/Data.pdf")<<std::endl;
}
