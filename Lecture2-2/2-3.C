#include<stdio.h>
#include<conio.h>
#define half 0.5
main()
{
  float b,h,area;
  clrscr();
  printf("Enter the base:");
  scanf("%f",& b);
  printf("Enter the height");
  scanf("%f",&h);
  area = half*b*h;
  printf("Area of triangle :%f",area);
  getch();
}