//

#define IF0(xa) if(0 == (xa)) {  //
int f5122a(void)
{
    int testa = 0;
    IF0(testa)
        testa = testa + 1;
    }
    return (0);
}


//ok

#define IFO(xa) if(0 == (xa))  //ok1
int f5122b(void)
{
	int testb = 0;
	IFO(testb)
	{
		testb = testb + 1;
	}
	return (0);
}
