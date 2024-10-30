/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/

#include <iostream>
#include <string>

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

void PrintTransformerInfo(const Transformer& transformer)
{
    std::cout << "Speed: " << transformer.get_speed() << std::endl;
    std::cout << "Eyes: " << transformer.get_eyes() << std::endl;
    std::cout << "Guntype: " << transformer.get_guntype() << std::endl;
    std::cout << "Ammo: " << transformer.get_ammo() << std::endl << std::endl;
}

int main()
{
    Autobot Bumblebee;
    Decepticon Megatron;
    Dinobot Sharik;
    PrintTransformerInfo(Bumblebee);
    PrintTransformerInfo(Megatron);
    PrintTransformerInfo(Sharik);
    return 0;
}












