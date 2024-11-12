/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/

#include <iostream>
#include <vector>
#include <string>

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

int main()
{

    std::vector<Transformer*> transformers;

    for (int i = 0; i < 3; ++i)
    {
        transformers.push_back(new Autobot());
        transformers.push_back(new Decepticon());
        transformers.push_back(new Dinobot());
    }

    for (Transformer* transformer : transformers)
    {
        std::cout << transformer->transform();
        std::cout << transformer->openFire();
        std::cout << transformer->ulta();
    }

    for (Transformer* transformer : transformers)
    {
        delete transformer;
    }

    return 0;
}












