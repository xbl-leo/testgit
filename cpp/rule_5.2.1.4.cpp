//not ok £º

int f5214a(void)
{
    int ia = 0, ja = 1, ka = 2;
    int aa = 0, ba = 0;
//......
if((0 == ia) || (1 == ja) && (2 == ka))//not ok  1
{
    aa = 0;
}
else
{
    aa = 1;
}
return (0);
}


//ok£º

int f5214b(void)
{
    int ib = 0, jb = 1, kb = 2;
    int ab = 0, bb = 0;
    //......
    if(((0 == ib) || (1 == jb)) && (2 == kb))   //ok 1
    {
        ab = 0;
    }
    else
    {
        ab = 1;
    }
    return (0);
}
