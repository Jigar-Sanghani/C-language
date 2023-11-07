#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a,b,c;
	clrscr();
	P("Enter The A :");
	S("%d",&a);
	P("Enter The B :");
	S("%d",&b);
	P("Enter The C :");
	S("%d",&c);

	if(a<b && a<c)
	{
		P("A Is Small !!");
	}
	else if(b<a && b<c)
	{
		P("B Is Small !!");
	}
	else
	{
		P("C Is Small !!");
	}
	getch();
}
