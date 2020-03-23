//not ok

typedef struct
{
    unsigned char d01a  :  2;
    unsigned char d02a  :  2;
    unsigned char d03a  :  2;
    unsigned short d04a  :  2;     //not ok 1
} stData1a;
typedef struct
{
    unsigned short d01a  :  2;
    unsigned short d02a  :  2;
    unsigned short d03a  :  2;
    unsigned short d04a  :  12;     //not ok 2
    unsigned short d05a  :  2;
    unsigned short d06a  :  2;
    unsigned short d07a  :  2;
    unsigned short d08a  :  2;
} stData2a;
int f51112(void)
{
    stData1a my_data1a;
    stData2a my_data2a;
    return (0);
}


//ok
typedef struct
{
      unsigned char d01b : 2;
      unsigned char d02b : 2;
      unsigned char d03b : 2;
      unsigned char d04b : 2;         //ok 1
} stData1b;
typedef struct
{
      unsigned short d01b : 2;
      unsigned short d02b : 2;
      unsigned short d03b : 2;
      unsigned short d04b : 10;       //ok 2
      unsigned short d05b : 2;
      unsigned short d06b : 2;
      unsigned short d07b : 2;
      unsigned short d08b : 10;
} stData2b;
int fun(void)
{
      stData1b my_data1b;
      stData2b my_data2b;
      return (0);
}
