#include<stdio.h>
#include "my_function.c"

void loop(int s,int e)
{
	printf("Loop :%d\n",s++);
	if(s<=e)
	{
		loop(s,e);
	}
}
void main()
{
	loop(1,10);
}
