//not ok

int f5115a(heighta)   //not ok 1
{
	int ha;
	ha = heighta + 10;
	return ha;
}
int f5115b(void)
{
    int ia, ja;
    ia = 1000;
    ja = f5115a(ia);
    return (0);
  }


//ok

int f5115c(int heightb)   //ok 1
{
    int hb;
    hb = heightb + 10;
    return hb;
}
int f5115d(void)
{
    int ib, jb;
    ib = 1000;
    jb = f5115c(ib);
    return (0);
}
