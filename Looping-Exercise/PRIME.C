#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int n,i,count=0;
	clrscr();
	P("Enter The N :");
	S("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}

	if(count<=2)
	{
		P("Prime !!");
	}

	else
	{
		P("Not Prime !!");
	}
	getch();
}
