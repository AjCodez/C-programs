//Function with arguments and no return value

#include<stdio.h>
void fact(int a);
void main()
{
int num;
scanf("%d",&num);
fact(num);
}
void fact(int N)
{
int i,fact=1;
for(i=1;i<=N;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
