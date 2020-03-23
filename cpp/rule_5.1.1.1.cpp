//not ok:

#define long 100        //not ok 1
#define static ttt      //not ok 2
#define for fff         //not ok 3
#define struct sss      //not ok 4
#define register rrr    //not ok 5
#define return ret      //not ok 6
#define _Bool bbb       //C99 not ok
#define _Alignof  aaa   //C11 not ok


int f5111a(void)
{
    int ia;
    ia = long;
    return 0;
}


//ok:

#define LONG_NUM 100    //ok 1
int f5111b(void)
{
    int ib;
    ib = LONG_NUM;
    return 0;
}
