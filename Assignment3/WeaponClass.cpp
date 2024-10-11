/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"
#include <string>

void Transformer::set_guntype(uint guntype)
{
    _guntype=guntype;
};
uint Transformer::get_guntype()
{
 return _guntype;
};

void Transformer::set_ammo(uint ammo)
{
    _ammo=ammo;
};
uint Transformer::get_ammo()
{
 return _ammo;
};

Weapon::Weapon()
{
    std::string guntype = "Laser";
    int ammo = 1724;
}
Weapon::~Weapon()
{
    delete guntype;
    delete ammo;
}
