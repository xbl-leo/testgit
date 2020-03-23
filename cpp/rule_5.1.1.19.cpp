//not ok

extern int aa = 2;     //not ok 1
int f51119a(void)
{
    aa = 3;
    return (0);
}


//ok


 extern int ab;      //ok 1
 int f51119b(void)
 {
     ab = 3;
     return (0);
 }
