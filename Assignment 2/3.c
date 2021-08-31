#include<stdio.h>
#include<math.h>
void main()
{
	int cm,km,m;
	printf("%s","Enter the centimeteres : ");
	scanf("%d",&cm);
	km=cm/100000;
	cm=cm%100000;
	m=cm/100;
	cm=cm%100;
	printf("Given cm has %d km, %d m and %d cm",km,m,cm);
}

