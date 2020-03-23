//not ok

#include <iostream>
using namespace stda;
int f6613a(void);
int f6613b(void)
{
    int ia;
    ia = f6613a();
    return (0);
}
int f6613a(void)
{
    int *pa = new int[3];
    int *pb=new int[3];
    if(NULL == pa)
    {
        return (-1);
    }
    else
    {
        *pa = 1;
        pa++;
        *pa = 2;
        delete[] pa;   //not ok 1
	delete[] pb;    // ok
        pa = NULL;
    }
    return (0);
}

