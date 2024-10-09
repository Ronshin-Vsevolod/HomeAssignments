/* Victor Kats v.kats@spbu.ru
Class header example
*/

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
