#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a][a],f=0;
    for(int i=0;i<a;i++)
    {
        for(int j;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(i==j){
            if(arr[i][j]!=1){
            f++;
            break;}}
            else{
            if(arr[i][j]!=0){
            f++;
            break;}}
        }
    }
    if(f==0)
    printf("Identity matrix");
    else
    printf("Non identity matrix");
    return 0;
}