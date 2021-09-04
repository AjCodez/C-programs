#include<stdio.h>
void main()
{
int x;
scanf("%d",&x);
int a[x],l,s,i;
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<x-1;i++)
{
if(a[i]<a[i+1])
{
l=a[i+1];
s=a[i];
}
}
printf("%d%d",l,s);
}
