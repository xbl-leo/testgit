#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    A(char *cstr);
    //A(const A &ca);
    A(void);
    ~A(void);
    //operator=(const A &ca);
private:
    char *str;
};
A::A(char *cstr)
{
    str = new char[20];
    strncpy(str, cstr, 20);
}
/*
A::A(const A &ca)//ok 1
{
    str = new char[20];
    strncpy(str, ca.str, 20);
}*/
/*
A::operator=(const A &ca)//ok 2
{
    if(NULL == str)
    {
        str = new char[20];
    }
    strncpy(str, ca.str, 20);
}*/
A::A(void) : str(new char[20])    
{
    strncpy(str, "Welcome!", 20);
}
A::~A(void)
{
	delete[] str;
	str = NULL;
}
int f6111a(void){
    A a("Hello world!");
    A b(a);
    A c;
    c = b;
    return (0);
}
