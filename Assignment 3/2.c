#include<stdio.h>
int fact();
void main()
{
int factorial;
factorial=fact();
printf("%d",factorial);
}
int fact()
{
int N,i,fact=1;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
fact=fact*i;
}
return fact;
}
