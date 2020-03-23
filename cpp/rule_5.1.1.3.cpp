
typedef int mytype;

int f5113(void)
{
    typedef float mytype;       //not ok 1
    mytype x = 1.0;
    return (0);
}
