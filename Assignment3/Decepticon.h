/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include <string>

class Decepticon: public Transformer
{
public:
    Decepticon(int _speed, const std::string& _eyes, const std::string& _guntype, int _ammo);
    Decepticon();
    std::string cheer();
    void set_ammo();
    void set_guntype();
    void set_speedAfterburner();
    void set_eyes();
};

#endif
