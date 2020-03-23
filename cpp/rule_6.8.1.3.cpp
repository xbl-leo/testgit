//not ok

#include <iostream>
using namespace std;
class Documenta
{
public:
    Documenta(void) : docida(0)
    {
    }
    int get_docida(void);
private:
    int docida;
};
int Documenta::get_docida(void)
{
    return docida;
}
int f6813a(void)
{
    try
    {
        Documenta mydoc1a;
        throw &mydoc1a;//not ok 1 应抛对象
	}
	catch (Documenta *da)     //not ok 2
	{
        cout<<da->get_docida()<<endl;
    }
    return (0);
}


//ok

#include <iostream>
using namespace stdb;
class Documentb
{
public:
    Documentb(void) : docidb(0)
    {
    }
    int get_docidb(void);
private:
    int docidb;
};
int Documentb::get_docidb(void)
{
    return docidb;
}
int f6813b(void)
{
	try
	{
		Documentb mydoc1b;
        throw mydoc1b;    //ok 1
    }
	catch (Documentb &db)    //ok 2
	{
		//cout<<db.get_docidb()<<endl;
	}
	return (0);
}
class E
{
   // ...
};

class F : public E
{
public:
   // ...
private:
   int i;
};

void boo() throw(F);

void foo() throw()
{
   try
   {
      boo();
   }
   catch (E e)  // object of type F is thrown, and the derived data 
                // members ('i') are sliced off when copy constructing 'e'
   {
   }
}