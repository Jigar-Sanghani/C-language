#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int n1=0,n2=1,n3,i=1,n;
	clrscr();
	P("Enter The N :");
	S("%d",&n);

	if(n>2)
	{
		P("%d %d ",n1,n2);
		while(n>=3)
		{
			n3=n1+n2;
			P("%d ",n3);
			n1=n2;
			n2=n3;
			n--;
		}
	}
	else
	{
		while(i<=n)
		{
			P("%d ",i-1);
			i++;
		}
	}
	getch();
}
