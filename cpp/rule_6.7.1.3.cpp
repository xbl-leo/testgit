//not ok

#include <iostream>
using namespace stda;
class Aa
{
public:
    Aa(int na_, int *ba_);
    Aa(const Aa &caa);
    Aa(void);
    ~A(void);
    operator=(const Aa &caa);
    int &get_na(void);
private:
    int na;
    int *ba;
};
Aa::Aa(int na_, int *ba_)
{
    na = na_;
    ba = new int[na];
    for(int ia=0; ia<na; ia++)
    {
        ba[ia] = ba_[ia];
    }
}
Aa::Aa(const Aa &caa)
{
    na = caa.na;
    ba = new int[na];
    for(int ia=0; ia<na; ia++)
    {
        ba[ia] = caa.ba[ia];
    }
}
Aa::operator=(const Aa &caa)
{
    na = caa.na;
    ba = new int[na];
    for(int ia=0; ia<na; ia++)
    {
        ba[ia] = caa.ba[ia];
    }
}
Aa::Aa(void) : ba(new int[0]), na(1)
{
    ba[0] = 0;
}
Aa::~Aa(void)
{
    delete[] ba;
    ba = NULL;
}
int &Aa::get_na(void)         //not ok 1
{
    return na;
}
int f6713a(void)
{
    int ba[2] = {1, 2};
    Aa aa(2, ba);
    int &na = aa.get_na();
    na = 10;
    return (0);
}


