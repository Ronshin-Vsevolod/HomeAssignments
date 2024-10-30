/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/

#include <string>

#include "Dinobot.h"

Dinobot::Dinobot(int _speed, const std::string& _eyes, const std::string& _guntype, int _ammo)
    : Transformer(_speed, "purple", _guntype, _ammo) {}
Dinobot::Dinobot()
    : Transformer(60, "purple", "None", 0)
{
    cheer();
}

std::string Dinobot::cheer()
{
    return "Rooooaaar! \n";
}

void Dinobot::set_speedAfterburner()
{
    this->_speed = 105;
}

void Dinobot::set_eyes()
{
    this->_eyes = "green";
}

void Dinobot::set_guntype()
{
    this->_guntype = "Jaw";
}

void Dinobot::set_ammo()
{
    this->_ammo += 1724;
}
