//not ok

#include <iostream>
using namespace std;
void f6612a(void)
{
    int *pa = new int[3];
    pa[0] = 1;
    pa[1] = 2;
    pa[2] = 3;
    delete pa;  //not ok 1
    pa = NULL;
}
int f6612b(void)
{
    f6612a();
    return (0);
}

