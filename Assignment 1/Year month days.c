#include<stdio.h>
#include<math.h>
void main()
{
	int d,m,y,days;
	scanf("%d",&d);
	y=d/365;
	days=d%365;
	m=days/30;
	days=days%30;
	printf("%d Days has %d Years, %d Months and %d Days in it",d,y,m,days);
}
