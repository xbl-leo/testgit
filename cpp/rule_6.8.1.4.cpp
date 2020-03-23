//not ok

#include <iostream>
using namespace std;
class Document
{
public:
    Document(void) : docida(0)
    {
    }
    int get_docida(void);
private:
    int docida;
};
int Document::get_docida(void)
{
    return docida;
}
int f6814a(void)
{
    try
    {
        Document mydoc1a;
        throw mydoc1a;
    }
    catch (...)          //not ok 1
    {
        cout<<"ȱʡ����"<<endl;
    }
    catch (Document &d)
    {
        cout<<d.get_docida()<<endl;
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
int f6814b(void)
{
    try
    {
		Document mydoc1b;
        throw mydoc1b;
	}
    catch (Documentb &db)
    {
        cout<<db.get_docidb()<<endl;
    }
   // catch (...)            //ok 1  6.8.2.1 建议有缺省捕获
    {
        cout<<"ȱʡ����"<<endl;
    }
    return (0);
}