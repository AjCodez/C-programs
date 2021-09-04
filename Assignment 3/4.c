//Function with arguments and return value

#include<stdio.h>
int fact(int a);
void main()
{
int num,factorial;
scanf("%d",&num);
factorial=fact(num);
printf("%d",factorial);
}
int fact(int N)
{
int i,fact=1;
for(i=1;i<=N;i++)
{
fact=fact*i;
}
return fact;
}
