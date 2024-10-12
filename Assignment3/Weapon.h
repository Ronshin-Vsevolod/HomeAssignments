/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#ifndef WEAPON_H
#define WEAPON_H
#include "Transformer.h"
#include <string>

class Weapon
{
public:
    std::string overheating();
private:
    Weapon();

    void set_guntype(Transformer& transformer);
    int get_guntype(const Transformer& transformer) const;
    void set_ammo(Transformer& transformer, int ammo);
    int get_ammo(const Transformer& transformer) const;

};

#endif
