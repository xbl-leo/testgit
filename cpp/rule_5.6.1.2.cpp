//not ok

int f5612a(void)
{
    unsigned char data1a = 256;  //not ok 1
    signed char data2a = -129; //not ok 2
    //...
    return (0);
}


//ok

int f5612b(void)
{
    unsigned short data1b = 256;  //ok1
    short data2b = -129;  //ok2
    return (0);
}