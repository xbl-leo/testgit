//example

#include <iostream>
using namespace std;
int f6822a(void)
{
    int i;

    try
    {
        int a1 = 1;
        int *a2 = new int(2);
        if(i > 10)
        {
             throw &a1;
        }
        else
        {
             throw a2;
        }
    }
    catch (int *b)
	{
		cout<<b<<endl;
		//tip 1
	}
	return(0);
}
/* 模板的声明在一起 6.9.1 6.9.2.1 */


template<typename T>
class A
{
public:
  typedef int TYPE;
  TYPE foo (TYPE);
};

// 'typename' specifies to the compiler the TYPE names a type.
template<typename T>
typename A<T>::TYPE A<T>::foo (TYPE)
{
}