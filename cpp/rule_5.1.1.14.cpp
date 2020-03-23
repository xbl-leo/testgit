//not ok

int f5114a(short heighta);    //not ok  1
float f5114b(int heighta);    //not ok  2
int f5114c(int heighta);      //not ok  3
int f5114d(void)
{
	int ia, j1a, j2a, j3a;
  ia = 1000;
  j1a= f5114a(ia);
  j2a= f5114b(ia);
  j3a= f5114c(ia);
  return (0);
}
int f5114a(int heighta)
{
  int ha;
  ha = heighta + 10;
  return ha;
}
int f5114b(int heighta)
{
  int ha;
  ha = heighta - 10;
  return ha;
}
int f5114c(int widtha)
{
  int wa;
  wa = widtha - 10;
  return wa;
}


//ok

int  f5114e(int heightb);       //ok1
int  f5114f(int heightb);       //ok2
int  f5114g(int widthb);        //ok3
int  f5114h(void)
{
	int ib, j1b, j2b, j3b;
	ib = 1000;
	j1b = f5114e(ib);
	j2b = f5114f(ib);
	j3b = f5114g(ib);
	return (0);
}
int f5114e(int heightb)
{
	int hb;
  hb = heightb + 10;
  return hb;
}
int f5114f(int heightb)
{
  int hb;
  hb = heightb - 10;
  return hb;
}
int f5114g(int widthb)
{
  int wb;
  wb = widthb - 10;
  return wb;
}