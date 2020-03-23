//not ok

#include <iostream>
using namespace stda;
class Fooa   //not ok 1
{
public:
	  //explicit Fooa();
	  //Fooa(void);
	  ~Fooa(void);
    void SetVara(int);
private:
    int aa;
};
//Fooa::Fooa(void){aa=0;}
Fooa::~Fooa(void) {}
void Fooa::SetVara(int vara)
{
    aa = vara;
}
int main(void)
{
    Fooa thefa;
    thefa.SetVara(2);
    return (0);
}
