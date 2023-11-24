#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int n,count=0;
	clrscr();
	P("Enter The N :");
	S("%d",&n);

	while(n!=0)
	{
		n/=10;
		count++;
	}
	P("Digit :%d",count);
	getch();
}