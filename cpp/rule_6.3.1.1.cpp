//not ok

#include <iostream>
using namespace stda;
class Ba
{
public:
    Ba(void);
    //virtual ~Ba(void);
    ~Ba(void);   //not ok 1
    virtual void fa(int aa) = 0;
protected:
    Ba(const Ba&);
    Ba& operator=(const Ba&);
};
Ba::Ba(void)
{
}
Ba::~Ba(void)
{
}
class Da: public Ba
{
public:
    Da(void);
    explicit Da(int aa);
    ~Da(void);    //not ok 2
    virtual void fa(int aa);
private:
    int* mda;
    Da(const Da&);
    Da& operator=(const Da&);
};   
Da::Da(int aa) : Ba(), mda(new int)
{
    *mda = aa;
}
void Da::fa(int aa)
{
    *mda = aa;
}
Da::~Da(void)
{
    delete mda;
    mda = NULL;
}
int main(void)
{
    Ba* da = new Da(1);
    da->fa(2);
    delete da;
    da = NULL;
    return (0);
}
