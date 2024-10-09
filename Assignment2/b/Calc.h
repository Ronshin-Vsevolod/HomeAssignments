/* Ronshin Vsevolod st132572@student.spbu.ru
    first project
*/

#ifndef CACLULATOR_h
#define CACLULATOR_h
#include <string>

class Calc
{
private:
    double* mstack;
    int top=0;

    void add(double newnumb);
    double pop();
public:
    Calc();
    ~Calc();
    void calculate(char* data, double* result);
};

#endif
