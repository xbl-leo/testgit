//not ok

#include <iostream>
using namespace stda;
class Basea
{
public:
    Basea(void);
    virtual ~Basea(void);
    virtual int ga(int aa = 0);
};
Basea::Basea(void)
{
}
Basea::~Basea(void)
{
}
int Basea::ga(int aa)
{
    return (aa+1);
}
class Deriveda : public virtual Basea
{
public:
    Deriveda(void);
    virtual ~Deriveda(void);
    virtual int ga(int aa = 1);   //not ok 1
};
Deriveda::Deriveda(void)
{
}
Deriveda::~Deriveda(void)
{
}
int Deriveda::ga(int aa)
{
    return (aa+11);
}
int main(void)
{
    int ia;
    Deriveda da;
    Basea &ba = da;
    ia = ba.ga( );
    ia = da.ga( );
    return (0);
}
