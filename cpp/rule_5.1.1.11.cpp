//not ok £º

typedef struct
{
    short d01a : 2;    //not ok 1
    short d02a : 2;    //not ok 2
    short resa : 12;    //not ok 3
} sDataa;
int f5111a(void)
{
    sDataa my_dataa;
    my_dataa.d01a = 1;
    my_dataa.d02a = 1;
my_dataa.resa = 0;
return (0);
}

//ok£º

typedef struct
{
    signed short d01b : 2;    //ok 1
    unsigned short d02b : 2;    //ok 2
    unsigned short resb : 12;    //ok 3
}sDatab;
int f5111b(void)
{
    sDatab my_datab;
    my_datab.d01b = 1;
    my_datab.d02b = 1;
    my_datab.resb = 0;
    return (0);
}

