/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "Transformer.h"
#include <string>

class Autobot: public Transformer
{
public:
    Autobot();
    std::string cheer();

private:
    void set_transformed();
    uint get_transformed();
    void set_eyes();
    int get_eyes();
};

#endif
