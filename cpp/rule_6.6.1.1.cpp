//not ok

#include <iostream>
using namespace std;
void f6611a(void)
{
    int *pa = new int;   //not ok 1
    *pa = 1;
    //бнбн
}
void f6611b(void)
{
    int *pa = new int[3];    //not ok 2
    pa[0] = 1;
    pa[1] = 2;
    pa[2] = 3;
    //бнбн
}
int main(void)
{
	f6611a();
	f6611b();
	return (0);
}


