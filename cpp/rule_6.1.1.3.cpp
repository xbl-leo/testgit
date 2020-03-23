#include <iostream>
using namespace std;
class A
{
public:
    A(void);
    void SetA(int);
private:
    int a;
};
A::A(void) : a(0)
{
}
void A::SetA(int va)
{
    a = va;
}
class B1 : public   A  //not ok 1
{
public:    
    B1(void);
    void SetB1(int);
private:
    int b1;
};
B1::B1(void) : A(), b1(0)
{
}
void B1::SetB1(int vb)
{
    b1 = vb;
    SetA(b1+1);
}
class B2 : public  A//not ok 2
{
public:          
    B2(void);
    void SetB2(int);
private:
    int b2;
};
B2::B2(void) : A(), b2(0)
{
}
void B2::SetB2(int vb)
{
    b2 = vb;
    SetA(b2+2);
}
class D : public B1, public B2
{
public:
    D(void);
private:
    int d;
};
D::D(void) : B1(), B2(), d(0)
{
}
int main(void)
{
    D thed;
    thed.SetB1(1);
    thed.SetB2(2);
    return (0);
}
