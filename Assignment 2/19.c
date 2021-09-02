#include<stdio.h>
#include<math.h>
void main()
{
	int pop;
	pop= 30000;
	pop= pop+pop*((float)20/100);
	pop= pop+pop*((float)30/100);
	printf("Population after 2 years = %d",pop);
}

