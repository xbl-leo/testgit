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
class Booka : public Documenta
{
public:
    Booka(void) : Documenta(), bookida(0)
    {
    }
    int get_bookida(void);
private:
    int bookida;
};
int Booka::get_bookida(void)
{
    return bookida;
}
int f6811a(void)
{
    Booka mybooka;
    try
    {
		throw mybooka;
	}
	catch (Documenta &da)   //not ok 1
	{
    	cout <<da.get_docida()<<endl;
	}
	catch(Booka &ba)      //not ok 2
	{
    	cout<<ba.get_bookida()<<endl;
	}
	return (0);
}


