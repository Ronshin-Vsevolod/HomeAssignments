/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/

#include <string>

#include "Decepticon.h"

Decepticon::Decepticon(int _speed, const std::string& _eyes, const std::string& _guntype, int _ammo)
    : Transformer(_speed, _eyes, _guntype, _ammo) {}
Decepticon::Decepticon()
    : Transformer(50, "purple", "Hands", 0)
{
    cheer();
}

std::string Decepticon::cheer()
{
    return "Ululu! 8P \n";
}

void Decepticon::set_speedAfterburner()
{
    this->_speed = 110;
}

void Decepticon::set_eyes()
{
    this->_eyes = "red";
}

void Decepticon::set_guntype()
{
    this->_guntype = "Energy cannon";
}

void Decepticon::set_ammo()
{
    this->_ammo += 10;
}
