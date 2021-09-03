#include<stdio.h>
#include<math.h>
void main()
{
	float px,py,qx,qy,s,a;
	scanf("%f%f%f%f",&px,&py,&qx,&qy);
	s=(qy-py)/(qx-px);
	a=tan(s);
	a=a*180/3.14;
	printf("slope = %f and angle of inclination = %f",s,a);
}

