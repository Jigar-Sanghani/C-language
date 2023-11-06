#include<stdio.h>
#include<conio.h>

main()
{
   int fa,sa,ta;int x=180;
   clrscr();

   printf("The First Angel is :");
   scanf("%d",&fa);

   printf("The Second Angel is :");
   scanf("%d",&sa);

   ta=x-(fa+sa);
   printf("The Third Angel is :%d",ta);
   getch();
}