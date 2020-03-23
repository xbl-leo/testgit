//not ok

int f5414(bool bsw)
{
    int x = 0;
    int y = 0;
    switch (0 == x)  //not ok 1
    {
    case 1:
        y = 1;
        break;
    default:
        y = 2;
        break;
    }

    switch (bsw)
    {
    case 0:
        y = 1;
        break;
    case 1:
        y = 2;
        break;
    default:
        break;
    }
	
    return (0);
}
