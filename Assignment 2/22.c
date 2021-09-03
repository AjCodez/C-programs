#include<stdio.h>
#include<math.h>
void main()
{
	double f,w,c=3*pow(10,8);
	printf("Enter Wavelength");
	scanf("%lf",&w);
	f=(c/w);
	printf("Frequency of given wavelength = %f",f);
}

