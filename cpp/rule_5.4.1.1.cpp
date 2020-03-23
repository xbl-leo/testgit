//not ok £º

int f5411a(void)
{
	int ia = 0, ja = 0;
    double xa = 0.0;
    //..
    if(0 == ia)
    {
		xa = 1.0;
	}
	else if(1 == ia)
	{
		xa = 2.0;
	}//not ok 1
	if(0 == ja)
	{
		xa = xa + 5.0;
	}
	return (0);
}


//ok£º

int f5411b(void)
{
	int ib = 0, jb = 0;
    double xa = 0.0;
    //..
    if(0 == ib)
	{
		xa = 1.0;
	}
    else if(1 == ib)
    {
		xa = 2.0;
    }
	else//ok 1
    {
		xa = 0.0;
    }
    if(0 == jb)
    {
		xa = xa + 5.0;
    }
    return (0);
}
