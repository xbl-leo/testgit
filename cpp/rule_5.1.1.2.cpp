//not ok��

#define f1 long         //not ok 1
#define f2 static       //not ok 2
#define f3 for          //not ok 3
#define f4 struct       //not ok 4
#define f5 register     //not ok 5
#define f6 return       //not ok 6
#define f7 _Bool        //not ok
#define f8 _Alignof     //not ok

#if 0
int f5112a(void)
{
    int64 ia = 0;
    JUDGE(0 == ia)
    {
        ia = 1;
    }
    return (0);
}
#endif

//��ѭʾ����

#define JUDGE_ZERO(ib)  if(0 == (ib))      //ok 1
typedef long           int64;            //ok 2
int f5112b(void)
{
	int64 ib = 0;
	JUDGE_ZERO(ib)
	{
		ib = 1;
		}
		return (0);
}
