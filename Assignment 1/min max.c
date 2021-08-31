#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a[x][y],i,j,sum=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(j==0)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
    
    return 0;
}