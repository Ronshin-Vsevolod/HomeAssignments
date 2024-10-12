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
    Decepticon();
    std::string cheer();

private:
    void set_transformed();
    uint get_transformed();
    void set_eyes();
    int get_eyes();
};

#endif
