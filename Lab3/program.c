#include <stdio.h>
ES_t Swap_Num(int * a, int *b)
{
	int temp;
	temp = *a;
	*a= *b;
	*b=temp;	
}
