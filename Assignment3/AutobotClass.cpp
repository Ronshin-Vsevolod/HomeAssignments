/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Autobot.h"
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

void Autobot::set_eyes()
{
    _eyes=1;
}
int Autobot::get_eyes()
{
    return _eyes;
}

Autobot::Autobot()
{
    cheer();
    set_transformed();
}
