#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a=0,n;
	clrscr();
	P("Enter The Number : ");
	S("%d",&n);
	while (n!=0)
	{
		n=n/10;
		a++;
	}
	P("Your Enter Digit Is :%d",a);
	getch();
}