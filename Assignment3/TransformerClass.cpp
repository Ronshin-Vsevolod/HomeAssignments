/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"

Transformer::Transformer()
{
    int speed = 99;
    std::string  brand = "brand_name";
    std::string  color="color_name";
}

Transformer::~Transformer()
{
    delete speed;
    delete brand;
    delete color;
}
