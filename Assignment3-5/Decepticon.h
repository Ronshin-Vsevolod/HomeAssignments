/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include <string>

#include "Transformer.h"

class Autobot;

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

    std::string transform()
    {
        return "method: transform \nclass: Decepticon \n\n";
    }

    std::string openFire()
    {
        return "method: openFire \nclass: Decepticon \n\n";
    }

    std::string ulta()
    {
        return "method: ulta \nclass: Decepticon \n\n";
    }
};

#endif
