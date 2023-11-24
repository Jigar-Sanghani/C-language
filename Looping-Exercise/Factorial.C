#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int n,i,fact=1;
	clrscr();
	P("Enter The Numer :");
	S("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact*=i;
		P("%d ",fact);
	}
	getch();
}
