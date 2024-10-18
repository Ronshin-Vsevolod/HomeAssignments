/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#ifndef TRANSFORMERS_H
#define TRANSFORMERS_H
#include <string>

class Transformer
{
public:
    Transformer(int _speed = 50, const std::string& _eyes = "off", const std::string& _guntype = "Hands", int _ammo = 0);
    ~Transformer();

    std::string get_guntype() const;
    int get_ammo() const;
    std::string get_eyes() const;
    int get_speed() const;
    bool fire();
    bool jump();

protected:
    int _speed;
    std::string _eyes;
    std::string _guntype;
    int _ammo;
};

#endif
