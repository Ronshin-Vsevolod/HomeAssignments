/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#ifndef TRANSFORMERS_H
#define TRANSFORMERS_H
#include <string>

class Transformer()
{
public:
    Transformer();
    int speed();
    std::string brand();
    std::string color();
private:
    uint _guntype;
    uint _ammo;
    uint _role;
};

class Autobot: public Transformer
{
public:
    bool transformed();
private:
    void set_role();
    void get_role();

};

class Decepticon: public Transformer
{
public:
    bool transformed();
private:
    void set_role();
    void get_role();
};

class Weapon()
{
    void set_guntype();
    void get_guntype();
    void set_ammo();
    void get_ammo();
};

#endif
