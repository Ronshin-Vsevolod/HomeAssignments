/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/


#ifndef AUTOBOT_H
#define AUTOBOT_H

#include <string>

#include "Transformer.h"

class Autobot: public Transformer
{
public:
    Autobot(int _speed, const std::string& _eyes, const std::string& _guntype, int _ammo);
    Autobot();
    std::string cheer();
    void set_ammo();
    void set_guntype();
    void set_speedAfterburner();
    void set_eyes();
};

#endif