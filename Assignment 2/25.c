#include<stdio.h>
#include<math.h>
void main()
{
	int amt,tt,fh,th,oh,f,tw,t,fi,two;
	scanf("%d",&amt);
	tt=amt/2000;
	amt=amt%2000;
	fh=amt/500;
	amt=amt%500;
	th=amt/200;
	amt=amt%200;
	oh=amt/100;
	amt=amt%100;
	f=amt/50;
	amt=amt%50;
	tw=amt/20;
	amt=amt%20;
	t=amt/10;
	amt=t%10;
	fi=amt/5;
	amt=amt%5;
	two=amt/2;
	amt=amt%2;
	printf("Given amount have %d Two thousand, %d Five Hundred, %d Two hundred, %d One hundred, %d Fifty, %d Twenty, %d Ten, %d five, %d Two and %d One rupee notes",tt,fh,th,oh,f,tw,t,fi,two,amt);
}

