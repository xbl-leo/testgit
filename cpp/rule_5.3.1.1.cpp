//not ok ��

#include <stdlib.h>
int f5311a(void)
{
    unsigned int array[5] = {0, 1, 2, 3, 4};
    unsigned int *p1_ptr = NULL, **p2_ptr = NULL;
    unsigned int ***p3_ptr = NULL;//not ok  1
    unsigned int data[5];
    unsigned int i;
	p1_ptr = array;
	p2_ptr = &p1_ptr;
	p3_ptr = &p2_ptr;
	for(i=0; i<5; i++)
	{
		data[i] = *(**p3_ptr + i);
	}
	return (0);
}

