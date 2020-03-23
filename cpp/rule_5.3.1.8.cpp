//not ok
#include <stdlib.h>

int f5318a(void)
{
    int *xa = (int *)malloc(sizeof(int));
    *xa = 1;//not ok  1
    return (0);
}


//ok

int f5318b(void)
{
    int *xb = (int *)malloc(sizeof(int));
    if(NULL != xb)//ok 1
    {
        *xb = 1;
    }
    else
    {
        return (-1);
    }
    return (0);
}
