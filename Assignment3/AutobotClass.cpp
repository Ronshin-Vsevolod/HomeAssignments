/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#include "Transformer.h"
#include <string>


void Transformer::Autobot::set_role(uint role)
{
 role_=role;
};
std::string get_role()
{
    return role
}

Autobot::Autobot()
{
    bool transformed = 1;
    std::string role = "Assault";
}
Autobot::~Autobot()
{
    delete transformed;
    delete role;
}
