/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Decepticon.h"
#include <string>

std::string Decepticon::cheer()
{
    return "Ululu! 8P";
}

void Decepticon::set_transformed()
{
    _speed=110;
}
uint Decepticon::get_transformed()
{
    return _speed;
}

void Decepticon::set_eyes()
{
    _eyes=0;
}
int Decepticon::get_eyes()
{
    return _eyes;
}

Decepticon::Decepticon()
{
    cheer();
    set_transformed();
}

