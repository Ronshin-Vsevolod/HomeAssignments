/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include <iostream>
#include "Transformer.h"

int main()
{//Such declaration of objects was chosen due to the problem of multiple inheritance
    Transformer* Optimus_Prime = new Autobot;
    Transformer* Bumblebee = new Autobot;
    Transformer* Megatrone = new Decepticon;

    delete Optimus_Prime;
    delete Bumblebee;
    delete Megatrone;
}












