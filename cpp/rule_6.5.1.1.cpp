//not ok

#include <iostream>
using namespace std;
struct S
{
    int i;
    int j;
    int k;
};
class C
{
public:
    int i;
    int j;
    int k;
    C(void);
    virtual ~C(void);
};
C::C(void) : i(0), j(0), k(0)
{
}
C::~C(void)
{
}
int main(void)
{
    S *s = new S;
    s->i = 0;
    s->j = 0;
    s->k = 0;
    C *c = reinterpret_cast<C *>(s); //not ok 1
    //...
    return (0);
}
