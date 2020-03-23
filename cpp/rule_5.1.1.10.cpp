//not ok ��

typedef struct
{
    signed int si01a : 1;          //not ok  1
    signed int si02a : 2;
    unsigned int serva : 29;
} sDataa;
int f51110a(void)
{
    sDataa my_dataa;
    my_dataa.si01a = -1;
    my_dataa.si02a = -1;
    return (0);
}


//ok��

typedef struct
{
    signed int si01b : 2;          //ok 1
    signed int si02b : 2;
    unsigned int servb : 28;
} sDatab;
int f51110b(void)
{
    sDatab my_datab;
    my_datab.si01b = -1;
    my_datab.si02b = -1;
    return (0);
}