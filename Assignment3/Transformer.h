/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#ifndef TRANSFORMERS_H
#define TRANSFORMERS_H
#include <string>

class Transformer
{
public:
    bool fire();
    bool jump();

private:
    class Autobot;
    class Decepticon;

protected:
    Transformer();
    ~Transformer();
    friend class Weapon;

    uint _speed;
    int _guntype;
    uint _ammo;
};

class Autobot: public Transformer
{
public:
    std::string cheer();
private:
    Autobot();
    ~Autobot();
    void set_transformed();
    uint get_transformed();

};

class Decepticon: public Transformer
{
public:
    std::string cheer();
private:
    Decepticon();
    ~Decepticon();
    void set_transformed();
    uint get_transformed();
};

class Weapon
{
public:
    void set_guntype(Transformer& transformer);
    int get_guntype(const Transformer& transformer) const;
    void set_ammo(Transformer& transformer, int ammo);
    int get_ammo(const Transformer& transformer) const;
private:
    Weapon();
    ~Weapon();
};

#endif
