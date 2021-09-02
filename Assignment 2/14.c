#include<stdio.h>
#include<math.h>
void main()
{
	float a,p,r,n,t;
	scanf("%f%f%f%f",&p,&r,&n,&t);
	a= p*pow(1+(r/n),n*t);
	printf("Final amount = %f",a);
}

