/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Autobot.h"
#include <string>

Autobot::Autobot(int _speed, const std::string& _eyes, const std::string& _guntype, int _ammo)
    : Transformer(_speed, _guntype, "purple", _ammo) {}
Autobot::Autobot()
    : Transformer(50, "purple", "Hands", 0)
{
    cheer();
}

std::string Autobot::cheer()
{
    return "Egegei XD \n";
}

void Autobot::set_speedAfterburner()
{
    this->_speed = 100;
}

void Autobot::set_eyes()
{
    this->_eyes = "blue";
}

void Autobot::set_guntype()
{
    this->_guntype = "Laser";
}

void Autobot::set_ammo()
{
    this->_ammo += 30;
}
