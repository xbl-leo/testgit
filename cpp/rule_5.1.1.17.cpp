//not ok £º

#include "rule_5.1.1.17.h"
int f5117a(void)
{
	extern int zdataa;             //not ok  1
	extern int fadda(int, int);    //not ok  2
	int xa, ya;
	xa = 1;
	ya = 2;
	zdataa = fadda(xa, ya);
	return (0);
}
