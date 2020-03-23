//ok

#include <iostream>
using namespace stdb;
class Bb
{
public:
    Bb(void);
    virtual ~Bb(void);
    virtual int gb(int ab = 0);
private:
    int bb;
};
Bb::Bb(void) : bb(1)
{
}
Bb::~Bb(void)
{
}
int Bb::gb(int ab)
{
    return (ab+bb);
}
class Db : public virtual Bb
{
public:
    Db(void);
    virtual ~Db(void);
    virtual int gb(int ab = 0);
private:
    int db;
};
Db::Db(void) : Bb(), db(2)
{
}
Db::~Db(void)
{
}
int Db::gb(int ab)
{
    return (ab+db);
}


//not ok


class Ba
{
public:
    Ba(void);
    virtual ~Ba(void);
    virtual int ga(int aa = 0);
private:
    int ba;
};
Ba::Ba(void) : ba(1)
{
}
Ba::~Ba(void)
{
}
int Ba::ga(int aa)
{
    return (aa+ba);
}
class Da : public virtual Ba //测试6.1.2.1 谨慎用虚基类派生
{
public:
    Da(void);
    virtual ~Da(void);
    virtual int ga(int aa = 0);
private:
    int da;
};
Da::Da(void) : Ba(), da(2)
{
}
Da::~Da(void)
{
}
int Da::ga(int aa)
{
    return (aa+da);
}

int main(void)
{
	 Da da;
    Ba &ba = da;
    Ba *pba = &da;
    Da *pd1a = reinterpret_cast<Da*>(pba);   //not ok 1
    Da &pd2a = reinterpret_cast<Da&>(*pba);   //not ok 2
     Db db;
    Bb &bb = db;
    Bb *pbb = &db;
    Db *pd1b = dynamic_cast<Db*>(pbb);    //ok 1
    Db &pd2b = dynamic_cast<Db&>(*pbb);   //ok 2
    
    return (0);
}

