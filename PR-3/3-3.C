#include<stdio.h>
#include<conio.h>

main()
{
	int n,a,fd,ld;
	clrscr();

	printf("Enter The Number :");
	scanf("%d",&n);

	ld=n%10;
	while(n>10)
	{
		n=n/10;
	}
	fd=n;
	a=ld+fd;
	printf("Your Number First And Last Number Sum Is :%d",a);
	getch();

}