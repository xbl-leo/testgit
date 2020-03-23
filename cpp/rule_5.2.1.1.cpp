//not ok £º

int f5211a(void)
{
    int ia;
    int dataa[10];
    for (ia = 0; ia < 10; ia++)
        dataa[ia] = 0;//not ok  1
    return (0);
}


//ok£º

int f5211b(void)
{
    int ib;
    int datab[10];
    for (ib = 0; ib < 10; ib++)
    {
        datab[ib] = 0;      //ok 1
    }
    return (0);
}
