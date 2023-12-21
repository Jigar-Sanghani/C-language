#include<stdio.h>

int getint()
{
	int n;
	scanf("%d",&n);
	return n;	
}

int getgrade()
{
	int total=0,per,n,i;
	for(i=0;i<7;i++)
	{
		printf("Enter %d Subject Mark :",i+1);
		scanf("%d",&n);
		total+=n;
		per=total/7;
	}
	return per;     
}

void arrayinput(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter A[%d] :",i+1);
		a[i]=getint();
	}
}

void arrayinput1(int a[],int n)
{
	int i;
	
	printf("\nEnter Array A Elements !!\n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] :",i+1);
		a[i]=getint();
	}
}

void arrayinput2(int b[],int n)
{
	int i;
	
	printf("\nEnter Array B Elements !!\n");
	for(i=0;i<n;i++)
	{
		printf("B[%d] :",i+1);
		b[i]=getint();
	}
}

void arrayavg(int a[],int n)
{
	int i,total=0,avg;
	for(i=0;i<n;i++)
	{
		total+=a[i];
		avg=total/n;
	}
	printf("\nAvg Of Array :%d",avg);
}

//void arraysum(int a[],int b[],int n)
//{
//	int i,sum[n],avg,total=0;
//	for(i=0;i<n;i++)
//	{
//		sum [i] = a[i] + b[i];
//	}
//	
//	for(i=0;i<n;i++)
//	{
//		printf("\nSum Of 2 Array :%d",sum[i]);
//		total+=sum[i];
//		avg = total/n;
//	}
//	
//	printf("\n\nAvg Of Sum :%d",avg);
//	
//}

int getarraylength()
{
	int n;
	printf("Enter Length Size :");
	n=getint();
	
	return n;
}

void arrayoutput(int a[],int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Value Of A[%d] :%d\n",i+1,a[i]);
	}
}

int arraysum(int a[],int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	
	return sum;
}

void border(int n,char c)
{
	while(n>=1)
	{
		printf("%c",c);
		n--;
	}
}


