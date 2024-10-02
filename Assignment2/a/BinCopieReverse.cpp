/* Ronshin Vsevolod st132572@student.spbu.ru
This reads and copies inverted pdf files
*/

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

int main(int argc, char** argv)
{
    std::ifstream infile;
    infile.open("../source.pdf",std::ios::binary|std::ios::in);
    if (infile.is_open())
    {
        const int fsize = std::filesystem::file_size("../source.pdf");
        char *buffer = new char[fsize];
        std::ofstream outfile;
        outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);
        // For some reason this code does not work for me without my own edits :(
        //infile.read((char *)&buffer,sizeof(buffer));
        //outfile.write((char *)&buffer,sizeof(buffer));
        infile.read(buffer, fsize);
        for (int i = 0; i < fsize / 2; i++) {
            int temp = buffer[i];
            buffer[i] = buffer[fsize - i - 1];
            buffer[fsize - i - 1] = temp;
        }
        outfile.write(buffer, fsize);

        delete [] buffer;
        infile.close();
        outfile.close();
    }
    else
    {
        std::cout<<"Error.The file cannot be opened"<<std::endl;
    }
    return 0;
}
