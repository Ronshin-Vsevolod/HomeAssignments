/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include <iostream>
#include "Transformer.h"
#include "Weapon.h"
#include "Autobot.h"
#include "Decepticon.h"


int main()
{
    Transformer* Optimus_Prime = Transformer::createAutobot();
    Transformer* Bumblebee = Transformer::createAutobot();
    Transformer* Megatrone = Transformer::createDecepticon();

    delete Optimus_Prime;
    delete Bumblebee;
    delete Megatrone;
}












