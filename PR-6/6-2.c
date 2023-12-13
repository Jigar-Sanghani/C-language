#include<stdio.h>
#include<string.h>

main()
{
	char str[20];
	int i,j;
	printf("Enter The Name :");
	gets(str);
	
	int feq[strlen(str)];
	
	for(i=0;i<strlen(str);i++)
	{
		feq[i]=1;
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[i]=str[j])
			{
				feq[i]++;
			}
		}
		printf("%c : %d\n",str[i],feq[i]);
	}
}
