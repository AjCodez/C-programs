#include<stdio.h>
int main()
{
    int n;
    printf("Enter length of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        int *p=&arr[i],f=0;
        for(int j=2;j<=*p/2;j++){
            if(*p%j==0){
            f++;
            break;}}
        if(f==0)
        printf("%d is a Prime Number\n",*p);
        else
        printf("%d is not a Prime Number\n", *p);}
    return 0;
}
