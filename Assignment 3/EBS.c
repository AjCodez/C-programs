#include<stdio.h>
void EBS();
void main()
{
EBS();
}
void EBS()
{
int unit,i;
float amt,famt,gst;
scanf("%d",&unit);
if(unit>100)
{
if(unit>200)
{
i=unit-200;
amt=i*4.50;
amt=amt+350;
amt=amt+200;
}
else
{
i=unit-100;
amt=i*3.50;
amt=amt+200;
}
}
else
{
amt=unit*2.00;
}
gst=10*(amt/100);
famt=amt+gst;
printf("%f",famt);
}
