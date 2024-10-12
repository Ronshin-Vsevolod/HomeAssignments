/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"
#include <string>

std::string Autobot::cheer()
{
    return "Egegei XD";
}

void Autobot::set_transformed()
{
    _speed=100;
}
uint Autobot::get_transformed()
{
    return _speed;
}

Autobot::Autobot()
{
    cheer();
    set_transformed();
}
Autobot::~Autobot()
{

}
