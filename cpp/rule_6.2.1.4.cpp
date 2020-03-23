//not ok

#include <iostream>
using namespace stda;
class Fooa
{
public:
    int aa;
    Fooa(void);
    explicit Fooa(int);
private:
    int ba;
};
Fooa::Fooa(void)  //not ok 1
{
    aa = 0;
}
Fooa::Fooa(int varba)    //not ok 2
{
    ba = varba;
}
int main(void)
{
    Fooa thefa, thefa(1);
    return (0);
}

