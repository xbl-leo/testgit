//not ok

#include <iostream>
using namespace stda;
int f6815a(void)
{
    try
    {
        throw NULL;   //not ok 1
    }
    catch (int)
    {
        //...
    }
    catch (const char *)
    {
        //...
    }
    return (0);
}


//ok

#include <iostream>
using namespace stdb;
int f6815b(void)
{
    char *pb = NULL;
    try
    {
        throw (pb);//ok 1
        throw (static_cast<const char *>(NULL)); //ok 2
    }
    catch (int)
    {
        //...
    }
    catch (const char *)
    {
        //...
    }
    return (0);
}
