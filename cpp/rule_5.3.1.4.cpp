//not ok

#include <stdlib.h>
unsigned int * f5314a(unsigned int *paa);
int f5314b(void)
{
	unsigned int dataa;
	unsigned int *resulta = NULL;
	resulta = f5314a(&dataa);
	return (0);
}
unsigned int * f5314a(unsigned int *paa)
{
	unsigned int tempa = 0;
    *paa = 10;
    tempa = *paa;
    return &tempa;   //not ok  1
}


//ok

#include <stdlib.h>
unsigned int * f5314c(unsigned int *pab);
unsigned int Gdatab = 0;
int f5314d(void)
{
	unsigned int datab;
    unsigned int *resultb = NULL;
    resultb = f5314c(&datab);
    return (0);
}
unsigned int * f5314c(unsigned int *pab)
{
	*pab = 10;
	Gdatab = *pab;
	return &Gdatab;             //ok 1
}
