//not ok 

#include <stdlib.h>
#include <string.h>
int main(void)
{
    int *x = NULL;
    int *y = (int *)malloc(sizeof(int));
    *x = 1;//not ok  1
    free(x);//not ok  2
    free(y);
    free(y);//not ok  3
    return (0);
}


//ok

#include <stdlib.h>
#include <string.h>
int fun(void)
{
    int *x1 = (int *)malloc(sizeof(int));
    int *y1 = (int *)malloc(sizeof(int));
    if((NULL != x1) || (NULL != y1))
    {
        *x1 = 1;     //ok 1
        free(x1);    //ok 2
        free(y1);    //ok 3
    }
    else
    {
        //...
    }
    return (0);
}
