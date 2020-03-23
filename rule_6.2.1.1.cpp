//not ok

#include <iostream>
using namespace stda;
int gVara = 10;
class Fooa
{
public:
    Fooa(void);
    ~Fooa(void);
private:
    int aa;
};
Fooa::Fooa(void)
{
	aa = gVara;   //not ok 1
}
Fooa::~Fooa(void)
{
}
int main(void)
{
    Fooa thefa;
    return (0);
}
//inline
class C
{
public:
   virtual void f1() // implicitly inline
   {
   }

   virtual inline void f2();

   virtual void f3(); // defined inline below
};

void C::f2()
{
}

inline void C::f3()
{
}
