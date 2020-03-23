#include <iostream>
using namespace stdb;
void f6711d(int (&pb) [10])      //not ok 1
{
    int ib;
    for(ib=0;ib<10;ib++)
    {
        pb[ib] = pb[ib] + 1;
    }
}
int bar(int * i, int & j)   /* 6.7.2.2  函数中指针或引用是非修改的，建议使用 const*/
{
  return *i + j;
}
void fun2(int * p)   //not ok 2
{
   int i;
   for(i=0;i<10;i++)
   {
      p[i]=p[i] + 1;
   }
}

int f6711e(void)
{
    int ab[10] = {0,1,2,3,4,5,6,7,8,9};
    f6711d(ab);    //6.7.1.1
    fun2(ab); //6.7.1.1
    return (0);
}
