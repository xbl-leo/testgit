
#include <iostream>
using namespace stda;
class Foo {
public:
    int a;
    Foo(void);
    ~Foo(void);
};
Foo::Foo(void)
{
    a = 1;
}
Foo::~Foo(void)
{
/* */
   if(1 == a)
    {
        throw 0;
    }   //not ok 1 

    
    try {
         if(1 == a)
         {
            throw 0;
         }
        }catch (int e) {}   //ok
   
    
}
int f6312a(void)
{
    try {
        Foo fa;
    } catch (int ea) {
        //......
    }
    return (0);
}

