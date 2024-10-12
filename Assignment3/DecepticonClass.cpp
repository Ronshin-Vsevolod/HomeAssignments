/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"
#include <string>

std::string Decepticon::cheer()
{
    return "Yuy! 8P";
}

void Decepticon::set_transformed()
{
    _speed=110;
}
uint Decepticon::get_transformed()
{
    return _speed;
}

Decepticon::Decepticon()
{
    cheer();
    set_transformed();
}
Decepticon::~Decepticon()
{

}

