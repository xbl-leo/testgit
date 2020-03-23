//not ok

#include <iostream>
using namespace stda;
class Ba
{
public:
    Ba(void);
    virtual ~Ba(void);
    virtual void fa(void) = 0;
    Ba & operator = (Ba const &rhsa);    //not ok 1
private:
    int kinda;
};
Ba::Ba(void) : kinda(0)
{
}
Ba::~Ba(void)
{
}
Ba & Ba::operator = (Ba const &rhsa)
{
    kinda = rhsa.kinda;
    return (*this);
}
class Da : public Ba
{
public:
    Da(void);
    virtual ~Da(void);
    virtual void fa(void) {};
    Da & operator = (Da const & rhsa);
private:
    int membera;
};
Da::Da(void) : Ba(), membera(0)
{
}
Da::~Da(void)
{
}
Da & Da::operator = (Da const &rhsa)
{
    membera = rhsa.membera;
    return (*this);
}
int f6114a(void)
{
    Da d1a;
    Da d2a;
    Ba &b1a = d1a;
    Ba &b2a = d2a;
    b1a = b2a;
    return (0);//not ok 2
}


//ok

class Bb
{
public:
    Bb(void);
    virtual ~Bb(void);
    virtual void fb(void) = 0;
protected:
    Bb & operator = (Bb const &rhsb);   //ok 1
private:
    int kindb;
};
Bb::Bb(void) : kindb(0)
{
}
Bb::~Bb(void)
{
}
Bb & Bb::operator = (Bb const &rhsb)
{
    kindb = rhsb.kindb;
    return (*this);
}
class Db : public Bb
{
public:
    Db(void);
    virtual ~Db(void);
    virtual void fb(void) {};
Db & operator = (Db const & rhsb);
private:
	int memberb;
};
Db::Db(void) : Bb(), memberb(0)
{
}
Db::~Db(void)
{
}
Db & Db::operator = (Db const &rhsb)
{
    memberb = rhsb.memberb;
    return (*this);
}
int f6114b(void)
{
    Db d1b;
    Db d2b;
    Bb &b1b = d1b;
    Bb &b2b = d2b;
    b1b = b2b;
    return (0);   //���ڲ�ȡ�˱��������÷�����ֹ�����뱨��
}