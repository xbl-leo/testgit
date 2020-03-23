//not ok

int f5511a(void)
{
    int i = -2, j = -2;
    int k;
    //...
L0:
    i = i + 1;
    if(i < 0)
    {
        goto L0;    //not ok  1
    }
    if(j < 0)
    {
	k = -10;
        j = 0;
        goto L1;   //not ok  2
    }
    for(k=0; k<10; k++)
    {
L1:
        j = j + k;
    }
    return (0);
}

