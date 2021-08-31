#include<stdio.h>
#include<math.h>
void main()
{
	float s1,s2,s3,s4,s5,t,a,p;
	printf("%s\n","Enter the marks of subjects :");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	t=s1+s2+s3+s4+s5;
	a=t/5;
	p=(t/500)*100;
	printf("Total = %f \nAverage = %f \nPercentage = %f \\%",t,a,p);
}

