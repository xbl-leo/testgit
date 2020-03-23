//not ok

#include <iostream>
using namespace std;
class A1a
{
public:
    A1a(void) {}
};
class A2a
{
public:
    A2a(void) {}
};
class A3a
{
public:
    A3a(void) {}
};
int f6812a(void)
{
    int ia=0;
    //...
    try
    {
        if(ia > 0)
        {
             throw A1a();
        }
        if(ia = 0)
        {
             throw A2a();//not ok 1
        }else
        {
             throw A3a();//not ok 1
        }
    }
    catch (A1a &)
    {
        cout<<"exception: A1a"<<endl;
    }
    return (0);
}


