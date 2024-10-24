/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/

#ifndef DINOBOT_H
#define DINOBOT_H

#include <string>

#include "Transformer.h"


class Dinobot: public Transformer
{
public:
    Dinobot(int _speed, const std::string& _eyes, const std::string& _guntype, int _ammo);
    Dinobot();
    std::string cheer();
    void set_ammo();
    void set_guntype();
    void set_speedAfterburner();
    void set_eyes();
};

#endif
