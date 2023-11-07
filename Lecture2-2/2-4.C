#include<stdio.h>
#include<conio.h>
main()
{
   float p,r,n,area;
   clrscr();
   printf("Enter the principal :");
   scanf("%f",&p);
   printf("Enter the rate of interst:");
   scanf("%f",&r);
   printf("Enter the time :");
   scanf("%f",&n);
   area = (p*r*n)/100;
   printf("Simple interest is :%.2f",area);
   getch();
}