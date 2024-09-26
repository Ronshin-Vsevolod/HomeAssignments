/* Ronshin Vsevolod st132572@student.spbu.ru
    first project
*/

#include <iostream>
#include "Hello.h"
using namespace std;

int main(int argc, char** argv)
{
    string word = "world";
    while(true)
        {
        SayHello(word);
        cout<<"Input: ";
        cin>>word;
        }
    return 0;
}

