#include <stdio.h>
void main()
{

    int n,f=0;
    printf("enter length of string");
    char s[n];
    scanf("%[^\n]",s[n]);
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1]){
            f++;
            break;
        }
    }
    if(f){
        printf("Not palindrome");
        

    }

}
