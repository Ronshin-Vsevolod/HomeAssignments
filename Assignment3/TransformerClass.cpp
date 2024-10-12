/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include <string>

Transformer* Transformer::createAutobot()
{
    return new Autobot();
}

Transformer* Transformer::createDecepticon()
{
    return new Decepticon();
}

bool Transformer::fire() {
 _ammo--;
 return true;
}
bool Transformer::jump() {
 return true;
}

Transformer::Transformer()
{
    _speed = 45;
}
Transformer::~Transformer()
{

}
