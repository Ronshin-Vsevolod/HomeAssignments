/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/

#include <string>

#include "Transformer.h"


Transformer::Transformer(int _speed, const std::string& _eyes, const std::string& _guntype, int _ammo)
    : _speed(_speed), _eyes(_eyes), _guntype(_guntype), _ammo(_ammo) {}
Transformer::~Transformer()
{

}

bool Transformer::fire()
{
    if (_ammo != 0)
    {
        _ammo--;
        return true;
    }
    return false;
}

bool Transformer::jump()
{
    return true;
}

int Transformer::get_speed() const
{
    return _speed;
}

std::string Transformer::get_eyes() const
{
    return _eyes;
}

std::string Transformer::get_guntype() const
{
    return _guntype;
}

int Transformer::get_ammo() const
{
    return _ammo;
}

bool Transformer::operator>(const Transformer& other) const
{
    return this->get_speed() > other.get_speed();
}

bool Transformer::operator<(const Transformer& other) const
{
    return this->get_speed() < other.get_speed();
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer)
{
    os<<"Information: " << std::endl << "Transformer" << std::endl <<transformer.get_eyes() << std::endl << transformer.get_guntype() << std::endl;
    return os;
}
