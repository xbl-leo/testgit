//example

#include <iostream>
using namespace stda;
class Fooa
{
public:
    Fooa(void);
    ~Fooa(void);
    void SetVara(int vara)    //tip 1
    {
        aa = vara;
    }
private:
    int aa;
};
Fooa::Fooa(void)
{
    aa = 0;
}
Fooa::~Fooa(void) {}
int f6721a(void)
{
    Fooa thefa;
    thefa.SetVara(2);
    return (0);
}


