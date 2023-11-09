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

	(a<b)
		?(a<c)
				? P("A Is Small !!")
				: P("C Is Small !!")
		:(b<c)
				? P("B Is Small !!")
				: P("C Is Small !!");

	getch();
}
