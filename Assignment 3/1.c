//Function with no arguments and no return value

#include<stdio.h>
void fact();
void main()
{
fact();
}
void fact()
{
int N,i,fact=1;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
