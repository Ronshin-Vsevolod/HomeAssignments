/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"
#include <string>
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
