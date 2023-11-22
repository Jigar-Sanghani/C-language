#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a;
	clrscr();
	P("Enter The Number :");
	S("%d",&a);
	(a%2==0)
		?P("This Number Is Even")
		:P("This Number Is Odd");
	getch();

}
