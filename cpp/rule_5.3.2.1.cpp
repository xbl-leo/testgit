extern int f1(void);
extern int f2(void);
extern int f3(void);
extern int f4(void);

int (* const fp[])(void) = {&f1, &f2, &f3, &f4};

extern int foo(int n)
{
    int r;

    r = (*fp[n])();                     /* Message 3671 */

    return r;
}
