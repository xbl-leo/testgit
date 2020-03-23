//not ok

#include <stdlib.h>
#include <string.h>
int f5317a(void)
{
    int *xa;     //not ok  1
    //...
    xa = (int *)malloc(sizeof(int));
    if(NULL != xa)
    {
        *xa = 1;
    }
    else
    {
        return (-1);
    }
    return (0);
}


//ok

#include <stdlib.h>
#include <string.h>
int f5317b(void)
{
    int *xb = NULL;   //ok 1
    //...
    xb = (int *)malloc(sizeof(int));
    if(NULL != xb)
    {
        *xb = 1;
    }
    else
    {
        return (-1);
    }
	return (0);
}