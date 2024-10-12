/* Ronshin Vsevolod st132572@student.spbu.ru
Work to explore class hierarchy.Creating characteristics of transformers.
*/

#ifndef TRANSFORMERS_H
#define TRANSFORMERS_H
#include <string>

class Transformer
{
public:
    Transformer();
    ~Transformer();
    static Transformer* createAutobot();
    static Transformer* createDecepticon();

    bool fire();
    bool jump();

protected:
    friend class Weapon; //It's not that scary, right?
    uint _speed;
    int _guntype;
    uint _ammo;
    int _eyes;

};

#endif
