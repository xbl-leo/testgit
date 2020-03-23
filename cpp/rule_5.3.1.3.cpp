//not ok

unsigned int f5313a(unsigned int *paa);
unsigned int f5313b(void)
{
    unsigned int dataa;
    unsigned int resulta;
    resulta = f5313a(&dataa);
    return (resulta);
}
unsigned int f5313a(unsigned int *paa)
{
    unsigned int ia = 10;
    ia = ia + 1;
    paa = &ia;              //not ok  1
    return ia;
}


//ok

#include <stdlib.h>
unsigned int f5313c(unsigned int **pab);
unsigned int f5313d(void)
{
    unsigned int *datab = NULL;
    unsigned int resultb;
    resultb = f5313c(&datab);
    return (resultb);
}
unsigned int f5313c(unsigned int **pab)
{
    static unsigned int ib = 10;
    ib = ib + 1;
    *pab = &ib;             //ok 1
    return ib;
}
