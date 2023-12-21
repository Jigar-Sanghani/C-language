#include<stdio.h>
#include"my_function.c"

int nsum(int n)
{
	if(n>1)
	{
		return n+ nsum(n-1);
	}
	else
	{
		return 1;
	}
}
void main()
{
	int a;
	printf("Enter The N :");
	a=getint();
	
	int sum;
	sum = nsum(a);
	
	printf("Sum :%d",sum);
	
}
