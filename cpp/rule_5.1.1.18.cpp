//not ok £º

int f5118a(void)
{
    int arraya[] = {0, 1, 2};       //not ok  1
    int ia;
    int dataa = 0;
    for(ia=0; ia<3; ia++)
    {
        dataa = dataa + arraya[ia];
    }
    return (0);
}


//ok£º

int f5118b(void)
{
    int arrayb[3] = {0, 1, 2};      //ok 1
    int ib;
    int datab = 0;
    for(ib=0; ib<3; ib++)
    {
        datab = datab + arrayb[ib];
    }
    return (0);
}
