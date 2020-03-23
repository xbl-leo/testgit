//not ok

#include <iostream>
using namespace std;
class A
{
public:
	A(void);
    virtual ~A(void);
    virtual void foo(void) = 0;
};
A::A(void)
{
}
A::~A(void)
{
}
class B: public A
{
public:
    B(void);
    virtual ~B(void);
    virtual void foo(void);
};
B::B(void)
{
}
B::~B(void)
{
}
void B::foo(void)
{
}
class C: public B
{
public:
    C(void);
    virtual ~C(void);
    virtual void foo(void) = 0;  //not ok 1
};
C::C(void)
{
}
C::~C(void)
{
}
int main(void)
{
    B myb;
    myb.foo();
    return (0);
}
