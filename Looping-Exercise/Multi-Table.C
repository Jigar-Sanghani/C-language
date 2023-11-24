#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int n,i;
	clrscr();
	P("Enter Table Number :");
	S("%d",&n);

	for(i=1;i<=10;i++)
	{
		P("%d %d %d",n,i,n*i);
		P("\n");
	}
	getch();
}
