void f5611b ( int p );

int f5611a(void)
{
    int sia;
    unsigned int uia = 0.1;   /* Not OK - In  declaration */
    f5611b ( 0.2 );           /* Not OK - In function call */
    sia = 5.0F;               /* Not OK - In assignment */
    return (1.0F);            /* Not OK - When return */
}

int f5611c(float a)
{
    int sia = a;         /* Not OK - In  declaration */
    f5611b(a);           /* Not OK - In function call */
    sia = (1.0F / 3.0F); /* Not OK - In assignment */
    return a;
}
