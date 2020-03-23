//not ok

int f5412a(void)
{
    int ia = 0, ja = 0, ka = 0;
    double xa = 0.0;
    //..
    if(0 == ia)
    {
        xa = 1.0;
    }
    else if(1 == ia)
    {
        xa = xa - 1.0;
    }
    else ; //not ok 1
    if(0 == ja)
    {
        xa = xa + 1.0;
    }
    else if(1 == ja)
    {
    ; //not ok 2
    }
    else      //not ok 3
    {
    }
    if(0 == ka)
    {
        xa = xa/2.0;
    }
    else if(1 == ka)
    {
        xa = xa/3.0;
    }
    else
    {
        /* no deal with */    //not ok 4
    }
    return (0);
}


//ok

int f5412b(void)
{
    int ia = 0, ja = 0, ka = 0;
    double xa = 0.0;
    //..
    if(0 == ia)
    {
        xa = 1.0;
    }
    else if(1 == ia)
    {
        xa = xa - 1.0;
    }
    else
    {
        ;   /* no deal with */  //ok1
    }
    if(0 == ja)
    {
	xa = xa + 1.0;
    }
    else if(1 == ja)
    {
        ; /* no deal with */    //ok2
    }
    else
    {
        ;   /* no deal with */     //ok3
    }
    if(0 == ka)
    {
        xa = xa/2.0;
    }
    else if(1 == ka)
    {
        xa = xa/3.0;
    }
    else
    {
        ;    /* no deal with */      //ok4
    }
    return (0);
}
