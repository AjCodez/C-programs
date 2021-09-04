#include <stdio.h>
void hamDist();
void main()
{
hamDist();
}
void hamDist()
{
int a,b,r,count=0;
scanf("%d%d",&a,&b);
r=a^b;
while(r>0)
{
count+=r&1;
r >>= 1;
}
printf("%d",count);
}
