#include <stdio.h>
ES_t Swap_Num(int * a, int *b)
{
	int temp;
	temp = *b;
	*b= *a;
	*a=temp;	
}
