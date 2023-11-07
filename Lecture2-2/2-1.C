#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
    float r,area;
    clrscr();

     printf("Fnter redius:");
     scanf("%f",&r);

     area = pi*r*r;
     printf("area of circle:%.2f",area);
     getch();
}