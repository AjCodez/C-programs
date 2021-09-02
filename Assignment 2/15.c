#include<stdio.h>
#include<math.h>
void main()
{
	printf("Hello\nWorld!\n"); // \n move the cursor to next line
	printf("Hellon\b");        // \b moves the cursor to prev char
	printf("\nHello\0");       // \0 terminate the string
	printf("\nHello\vWorld!"); // \v move text to next vertical tab position
	printf("\nHello\tWorld!"); // \t move text to next horizontal tab position
	printf("\nHello\\World!");   // \\ prints \ char
}

