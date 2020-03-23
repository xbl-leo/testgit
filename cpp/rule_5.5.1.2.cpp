//not ok £º

#include <math.h>
#include <setjmp.h>
jmp_buf mark;
double fdiv(double a, double b);
int f5512(void)
{
	int jmpret;
    double r, n1 = 1.0, n2 = 0.0;
    jmpret = setjmp(mark); //not ok  1
    if(0 == jmpret)
    {
		r = fdiv(n1, n2);
    }
    else
    {
        return(-1);
	}
	return (0);
}
double fdiv(double a, double b)
{
	double div = a / b;
    if(fabs(b) < 1e-10)
	{
		longjmp(mark, -1); //not ok  2
	}
	return div;
}

