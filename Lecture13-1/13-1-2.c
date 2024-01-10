#include<stdio.h>

void main()
{
	FILE *fp;
	int i;
	
	fp = fopen("divisible.txt","a");
	
	if (fp!=NULL)
	{
		for(i=1;i<=50;i++)
		{
			if((i%3==0)&&(i%5==0))
			{
				fprintf(fp,"%d ",i);
			}
		}
	}
	else
	{
		printf("big error");
	}
}
