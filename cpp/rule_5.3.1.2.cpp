//not ok ��

#include <stdlib.h>
int f5312a(int para1a, int para2a);
int f5312b(void)
{
    int aa = 2, ba = 1, ca = 0;
    if(NULL == f5312a)//not ok  1
    {
       return(-1);
    }
    else
    {
       int(*pa)(int, int) = f5312a;   //not ok  2
       ca = pa(aa, ba);
    }
    return (0);
}
int f5312a(int para1a, int para2a)
{
    return (para1a - para2a);
}


//ok��

#include <stdlib.h>
int f5312c(int para1b, int para2b);
int f5312d(void)
{
	int ab = 2, bb = 1, cb = 0;
 	if(NULL == &f5312c)//ok 1
    {
       return(-1);
    }
    else
    {
       int(*pb)(int, int) = &f5312c;//ok 2
       cb = pb(ab, bb);
    }
	return (0);
}
int f5312d(int para1b, int para2b)
{
	return (para1b - para2b);
}
