//not ok

int f51113a();     //not ok 1
int f51113b(int, int);      //not ok 2
int f51113c(void)
{
    int aa, ba, ca, da;
    aa = 10;
    ba = 5;
    ca = f51113a(aa, ba);
    da = f51113b(aa, ba);
    return (0);
}
int f51113a(int aa, int ba)
{
    int reta;
    reta = aa + ba;
    return reta;
}
int f51113b(int aa, int ba)
{
    int reta;
    reta = aa - ba;
    return reta;
}


//ok

int f51113d(int ab, int bb);    //ok 1
int f51113e(int ab, int bb);    //ok 2
int f51113f(void)
{
    int ab, bb, cb, db;
    ab = 10;
    bb = 5;
    cb = f51113d(ab, bb);
    db = f51113e(ab, bb);
    return (0);
}
int f51113d(int ab, int bb)
{
    int retb;
    retb = ab + bb;
    return retb;
}
int f51113e(int ab, int bb)
{
    int retb;
    retb = ab - bb;
    return retb;
}