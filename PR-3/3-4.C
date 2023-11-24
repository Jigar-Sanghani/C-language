#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int n,i,count=0,j;
	clrscr();
	P("Enter The Number :");
	S("%d",&n);

	P("Your Prime Numbber 1 To %d Is :",n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count<=2)
		{
			P("%d ",i);
		}
		count=0;
	}
	getch();
}
