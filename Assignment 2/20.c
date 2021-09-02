#include<stdio.h>
#include<math.h>
void main()
{
	int bp,sal,hra,ta;
	scanf("%d",&bp);
	hra=15;
	ta=20;
	sal=bp+bp*((float)hra/100)+bp*((float)ta/100);
	printf("Salary = %d",sal);
}

