#include <String.h> 
#include<cstring>
void c ()
{
	const int a;
	int const b;

}
/* &&,||,, 避免操作符重载 */
class C
{
};

const C operator,(const C& lhs, const C& rhs)
{
   return rhs; // rhs is an R-value, return R-value
}

C& operator,(const C& lhs, C& rhs)
{
   return rhs; // rhs is an L-value, return L-value
}
void foo(char* ptr)
{
   if ((ptr!=0) && (std::strlen(ptr)>0))
   {
     // ...
   }
}
C& operator&&(const C& lhs, C& rhs)
{
}
void swap(C& a, C& b)
{
   C tmp(a);
   (a=b,b=tmp); // evaluation of arguments in a function call is unspecified
                // hence b=tmp could be evaluated first,
                // leading to an incorrect result


}