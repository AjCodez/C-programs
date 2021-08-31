#include<stdio.h>
#include<math.h>
void main()
{
	float c,f;
	printf("%s","Enter the Fahrenheit : ");
	scanf("%f",&f);
	c=(f-32)*0.555;
	printf("Given Fahrenheit has %f Celsius.",c);
}

