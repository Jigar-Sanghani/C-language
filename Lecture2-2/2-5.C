#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
  float r,area;
  clrscr();
  printf("Enter the radius :");
  scanf("%f",&r);
  area = 2*pi*r;
  printf("Perimeter of circle :%f",area);
  getch();
}