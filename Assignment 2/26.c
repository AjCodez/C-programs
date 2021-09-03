#include<stdio.h>
#include<math.h>
void main()
{
	int h,m,s;
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("Given seconds has %d Hours, %d Minutes and %d seconds in it",h,m,s);
}

