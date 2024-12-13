/* Ronshin Vsevolod st132572@student.spbu.ru
Assignment to study in practice the work of templates and their specializations
*/

#include "Main.h"

int main(int argc, char** argv)
{
    MClass1 obj1;
    MClass2 obj2;
    MClass3 obj3;

    std::cout<< obj1.c_1_1() <<std::endl;
    std::cout<< obj2.c_2_2() <<std::endl;
    obj3.c_3_3();
    std::cout<<std::endl;

    std::cout<<"The program has worked successfully"<<std::endl;
    return 0;
}