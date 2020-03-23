//not ok

#include <iostream>
using namespace stda;
class Documenta
{
public:
    int docida;
    Documenta(void) : docida(0)
    {
	}
	explicit Documenta(int);
};
Documenta::Documenta(int vara)
{
    docida = vara;
}
class Booka : public Documenta
{
public:
    int bookida;
    Booka(void) :bookida(1)   //not ok 1
    {
    }
};
int main(void)
{
    Booka mybooka;
    return (0);
}


