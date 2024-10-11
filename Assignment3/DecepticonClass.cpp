/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"
#include <string>


void Transformer::Decepticon::set_role(uint role)
{
 role_=role;
};
std::string get_role()
{
    return role;
}

Decepticon::Decepticon()
{
    bool transformed = 0;
    std::string role = "Tank";
}
Decepticon::~Decepticon()
{
    delete transformed;
    delete role;
}

