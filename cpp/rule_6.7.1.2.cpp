//not ok

#include <iostream>
using namespace stda;
class Aa
{
public:
    Aa(int na_, int *ba_);
    Aa(const Aa &caa);
    Aa(void);
    ~Aa(void);
    operator=(const Aa &caa);
    int *get_ba(void) const;
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
int *Aa::get_ba(void) const    //not ok 1
{
    return ba;
}
class C
{
public:
   C();
   int* get_handle() const
   {
      return p;
   }
private:
   int* p;
};

void foo()
{
   const C c;
   *(c.get_handle())=0; // modification of const object
}
int f6712a(void)
{
    int ia = 0;
    int ba[2] = {1, 2};
    Aa const aa(2, ba);
    aa.get_ba()[0] = ia;
    return (0);
}


