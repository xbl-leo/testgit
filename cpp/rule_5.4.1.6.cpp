//not ok

enum WorkModea {INIa = 0, FIGHTa, MAINTAINa, TRAINa} work_statea;
int f5416a(void)
{
    int ia = 0;
    int ja = 0;
    //...
    switch(work_statea)//not ok  1
    {
    case INIa:
	ia = 1;
        break;
    case FIGHTa:
        ia = 2;
        break;
    case MAINTAINa:
        ia = 3;
        break;
    }
    switch(ia)//not ok  2
    {
    case 0:
	ja = 0;
	break;
    case 1: 
    case 2:
	ja = 1;
	break;
	}
	return (0);
}


//ok
enum WorkModeb {INIb = 0, FIGHTb, MAINTAINb, TRAINb} work_stateb;
int f5416b(void)
{
    int ib = 0;
    int jb = 0;
    //...
    switch(work_stateb)   //ok 1
    {
    case INIb:
        ib = 1;
        break;
    case FIGHTb:
        ib = 2;
        break;
    case MAINTAINb:
        ib = 3;
        break;
    case TRAINb:
        ib = 0;
        break;
    }
    switch(ib)//ok 2
    {
    case 0:
        jb = 0;
        break;
    case 1:
    case 2:
        jb = 1;
        break;
    default:
        jb = -1;
        break;
    }
    return (0);
}

