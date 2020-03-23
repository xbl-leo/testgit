//not ok

#include <iostream>
using namespace std;
class A
{
public:
    A(void);
    ~A(void);
    explicit A(int);
	int ma;
};
A::A(void)
{
    ma = 0;
}
A::A(int a)
{
    ma = a;
}
A::~A(void)
{
}
int c (void)
{	
//    int i=1;     
    double d=2.1;
    int c = (int)d;    /*6.5.2 避免使用c转换符*/
//    double b =(double) i;
    A const a1 = A(10);
    A *a2 = const_cast<A*>(&a1); //not ok 1
    a2->ma = 11;
    A &a3 = const_cast<A&>(a1); //not ok 2
    a3.ma = 12;
    return (0);
}

