#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int n,rem,rev=0;
	clrscr();
	P("Enter The N :");
	S("%d",&n);

	while(n!=0)
	{
		rem = n%10;
		rev = rev*10 +rem;
		n = n/10;
	}
	P("Reverse :%d",rev);
	getch();
}