/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy and google test.Creating characteristics of transformers.
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>

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

    bool operator>(const Transformer& other) const;
    bool operator<(const Transformer& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

protected:
    int _speed;
    std::string _eyes;
    std::string _guntype;
    int _ammo;
};

#endif
