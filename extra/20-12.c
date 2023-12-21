#include<stdio.h>
#include "my_function.c"


void main()
{
	int n;
	n=getarraylength();	
	
	int a[n];
	arrayinput(a,n);
	arraysum(a,n);
	arrayoutput(a,n);
	
	int sum;
	sum = arraysum(a,n);
	
	printf("\n");
	border(10,'*');
	printf("\nSum :%d\n",sum);
	border(10,'*');
}
