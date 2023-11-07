#include<stdio.h>
#include<conio.h>
main()
{
  float l,b,area;
  clrscr();
  printf("Enter the length :");
  scanf("%f",&l);
  printf("Enter the width :");
  scanf("%f",&b);
  area=l*b;
  printf("Area of rectangle:%f",area);
  getch();
}
