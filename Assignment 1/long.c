#include<stdio.h>
void main()
{
	int a; // -2147483648 to 2147483647
	long long int b; // -9223372036854775808 to 9223372036854775807
	printf("size of int = %d\n",sizeof(a));
	printf("size of long int = %d\n",sizeof(b));
	printf("%ld",2147483649);
}
