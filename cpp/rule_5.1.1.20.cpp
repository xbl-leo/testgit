//not ok £º

int f51120a(void)
{
    char ia;    //not ok 1
    int ja;
    ia = (char)0xFF;    //not ok 2
    ja = ia + 1;
    return (0);
}


//ok£º

int f51120b(void)
{
    unsigned char ib;     //ok 1
    int jb;
    ib = (unsigned char)0xFF;     //ok 2
    jb = ib + 1;
    return (0);
}
