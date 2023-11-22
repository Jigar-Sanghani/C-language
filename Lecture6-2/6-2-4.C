#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,i,n;
	clrscr();
	a=0;
	b=1;

	printf("Enter The  Number :");
	scanf("%d",&n);

	for(i=0; i<=n; i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}