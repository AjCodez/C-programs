#include<stdio.h>
int main()
{
    int a=0,b=0;
    int ria[5],sia[5],*s1=&a,*s2=&b;
    for(int i=0;i<5;i++){
    printf("enter %d subject marks of ria",i+1);
    scanf("%d",&ria[i]);
    printf("enter %d subject marks of sia",i+1);
    scanf("%d",&sia[i]);}
    for(int i=0;i<5;i++){
    int *p1=&ria[i],*p2=&sia[i];
    *s1+=*p1;
    *s2+=*p2;
    if(*p1>*p2)
    printf("Ria scored higher marks in %d subject\n",i+1);
    else if(*p2>*p1)
    printf("Sia scored higher marks in %d subject\n",i+1);
    else
    printf("Both scored equal marks in %d subject\n",i+1);
    }
    if(*s1>*s2)
    printf("Ria scored higher marks in average\n");
    else if(*s2>*s1)
    printf("Sia scored higher marks in average\n");
    else
    printf("Both scored equal marks in average\n");
    return 0;
}
