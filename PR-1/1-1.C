#include<stdio.h>
#include<conio.h>

main()
{
  float C,ans,a;
  clrscr();
  printf("Enter the tempreture in celcius :");
  scanf("%f",&C);
  a=C*9/5;
  ans=a+32;
  printf("Your temperature in farhenhit :%.2f",ans);
  getch();
}