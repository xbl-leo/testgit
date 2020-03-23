//not ok £º

int f51123a();  //not ok  1
int dataxa = 0;
int dataya = 0;
int f51123b(void)
{
	int iza;
	dataxa = 1;
	dataya = 2;
	iza = f51123a();
	return (0);
}
int f51123a()  //not ok  2
{
    int tempa;
    tempa = 2*dataxa + 3*dataya;
    return tempa;
}


//ok£º
int f51123c(void);  //ok 1
int dataxb = 0;
int datayb = 0;
int f51123d(void)
{
	int izb;
	dataxb = 1;
	datayb = 2;
	izb = f51123c();
	return (0);
}
int f51123c(void)  //ok 2
{
    int tempb;
    tempb = 2*dataxb + 3*datayb;
    return tempb;
}