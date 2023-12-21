#include<stdio.h>
#include "my_function.c"

void main()
{
	int per = getgrade();
		if(per>=90&&per<=100)
		{
			printf("Your Grade Is A+!!");
		}
		else if(per>=80&&per<=90)
		{
			printf("Your Grade Is A!!");
		}
		else if(per>=70&&per<=80)
		{
			printf("Your Grade Is B+!!");
		}
		else if(per>=60&&per<=70)
		{
			printf("Your Grade Is B!!");
		}
		else if(per>=50&&per<=60)
		{
			printf("Your Grade Is C+!!");
		}
		else if(per>=40&&per<=50)
		{
			printf("Your Grade Is C!!");
		}
		else
		{
			printf("Better Luck Next Time !!");
		}
}
