#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int n,n1=0,n2=1,n3,i=1;
	
	P("Enter N Number :");
	S("%d",&n);
	   
	if(n > 2)
	{
		printf("0 1 ");
		while(n >= 3)
		{
			n3 = n1 + n2;
			printf("%d ",n3);
			n1 = n2;
			n2 = n3;
			n--;
		}
	}
	else
	{
		while(i<2)
		{
			printf("%d ",i);
			i--;
		}
	}
}
