//not ok

int f5417a(void)
{
    int ia = 0;
    int ja = 0;
    int ka = 0;
    //...
    switch(ia)
    {
    case 1:  //not ok 1
      if (ja > 0)
      {
        ka = 1;
        break;
      }
      ka = 2;
    case 2:  //not ok 2
    case 3:  //not ok 3
      {
        ja = 3;
      }
    case 4:  //not ok 4
      ka = 4;
    case 5:
      ja = 5;
      break;
    default:  //not ok 5
      ja = -1;
    }
    return (0);
}


//ok

int f5417b(void)
{
  int ib = 0;
  int jb = 0;
  int kb = 0;
  //...
  switch(ib)
  {
  case 1:      //ok1
    if (jb > 0)
    {  
      kb = 1;
      break;
    }
    kb = 2;
    break;
  case 2:        /* shared */  //ok2
  case 3://ok3
    {
      jb = 3;
    }
    break;
  case 4: /* shared */  //ok4
    kb = 4;
  case 5:
    jb = 5;
    break;
  default:  //ok5
    jb = -1;
    break;
  }
    return (0);
}
