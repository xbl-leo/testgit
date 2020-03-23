//not ok

int f5418(void)
{
    int x = 2;
    int y = 0;
    int z = 0;
    //...
    switch ( x )
    {
    case 1 :
        if (0 == y)
	{
    case 2 :       //not ok  1
        z = 1;
        break;
        }
        z = 2;
        break;
    default :
        break;
    }
    return (0);
}
