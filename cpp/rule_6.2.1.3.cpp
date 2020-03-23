//not ok

#include <iostream>
using namespace stda;
class Fooa
{
public:
    Fooa(void);
    //explicit Fooa(char vara);
    Fooa(int vara);    //not ok 1
    int getVara(void);
    ~Fooa(void);
private:
    int aa;
};
Fooa::Fooa(void)
{
    aa= 0;
}
Fooa::Fooa(int vara)
{
    aa = vara;
}
int Fooa::getVara(void)
{
    return aa;
}
Fooa::~Fooa(void) {}
void fa(int);
int main(void)
{
    int ia=1;
    fa(ia);
    return (0);
}
void fa(Fooa thefa)
{
    int ja;
    //......
    ja = thefa.getVara();
}
