#include<stdio.h>
#include<math.h>
void main()
{
	int a;
	float b;
	double c;
	char d;
	printf("%s","Enter Integer : ");
	scanf("%d",&a);
	printf("%s","Enter Float : ");
	scanf("%f",&b);
	printf("%s","Enter Double : ");
	scanf("%lf",&c);
	printf("%s","Enter Character : ");
	scanf("%s",&d);
	
	printf("\nInteger = %d \nFloat = %f \nDouble = %lf \nCharacter = %c",a,b,c,d);
}

