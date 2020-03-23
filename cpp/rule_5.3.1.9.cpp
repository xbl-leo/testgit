//not ok

#include <stdlib.h>

int f5319a(void)
{
    int *xa = (int *)malloc(sizeof(int));
    if(xa != 0)//not ok  1
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

int f5319b(void)
{
    int *xb = (int *)malloc(sizeof(int));
    if(NULL != xb)             //ok 1
    {
        *xb = 1;
    }
    else
    {
        return (-1);
    }
    return (0);
}
