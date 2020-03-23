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
class Deriveda : public Basea
{
public:
    Deriveda(void);
    virtual ~Deriveda(void);
    int ga(int aa = 0);    //not ok 1
};
Deriveda::Deriveda(void)
{
}
Deriveda::~Deriveda(void)
{
}
int Deriveda::ga(int aa)
{
    return (aa+2);
}
int main(void)
{
    int ia,ja;
    Deriveda da;
    Basea &ba=da;
    ia = ba.ga( );
    ja = da.ga( );
    return (0);
}


