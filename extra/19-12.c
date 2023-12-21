#include<stdio.h>
#include "my_function.c"

void main()
{
	int n;
	printf("Enter The Length :");
	n=getint();
	
	int a[n],b[n];

//	arrayinput(a,n);
	arrayinput1(a,n);
	arrayinput2(b,n);
//	arrayoutput(a,n);
//	arrayavg(a,n);
	arraysum(a,b,n);
	
}
