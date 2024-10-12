/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"
#include <string>

void Weapon::set_guntype(Transformer& transformer)
{
    transformer._guntype = 1;
}
int Weapon::get_guntype(const Transformer& transformer) const
{
    return transformer._guntype;
}

void Weapon::set_ammo(Transformer& transformer, int ammo)
{
    transformer._ammo = ammo;
}
int Weapon::get_ammo(const Transformer& transformer) const
{
    return transformer._ammo;
}

Weapon::Weapon()
{
    int ammo = 1724;
}
Weapon::~Weapon()
{

}
