//not ok
#include <stdio.h>
int f53110a(void);
int f53110b(void)
{
     int reta;
     reta = f53110a();
     //...
     return (0);
}
int f53110a(void)
{
     FILE *streama = NULL;
     char sa[100];
     int na;
     if(NULL == (streama = fopen("data", "r")))
     {
         printf( "The file 'data' was not opened\n" );
         return (-1);
     }
     else
     {
         printf( "The file 'data' was opened\n" );
         na = fscanf(streama, "%s", sa);
         //...
         return (0);//not ok  1
   }
}

//ok
int f53110c(void);
int f53110d(void)
{
	int retb;
	retb = f53110c();
    //...
    return (0);
}
int f53110c(void)
{
	FILE *stream = NULL;
    char sb[100];
    int nb;
    if(NULL == (stream = fopen("data", "r")))
	{
		printf( "The file 'data' was not opened\n" );
        return (-1);
	}
	else
	{
		printf( "The file 'data' was opened\n" );
        nb = fscanf(stream, "%s", sb);
        //...
        fclose(stream); //ok 1
        return (0);
	}
}
