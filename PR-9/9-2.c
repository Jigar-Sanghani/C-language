#include<stdio.h>
#define P printf
#define S scanf

struct student
{
	int id;
	char name[20];
	int chemistry;
	int physics;
	int maths;
};

void main()
{
	int i;
	struct student s1[5];
	int total[5],per[5];
	
	for(i=0;i<5;i++)
	{
		P("------------------------------\n");
		P("Enter Details Of %d Students :\n",i+1);
		P("------------------------------\n");
		P("Enter Roll No :");
		S("%d",&s1[i].id);
		fflush(stdin);
		P("Enter Your Name :");
		S("%s",&s1[i].name);
		fflush(stdin);
		P("Enter The Chemistry Marks :");
		S("%d",&s1[i].chemistry);
		P("Enter The Physics Marks :");
		S("%d",&s1[i].physics);
		P("Enter The Maths Marks :");
		S("%d",&s1[i].maths);
		
		total[i] = s1[i].chemistry + s1[i].maths +s1[i].physics;
		per[i]=total[i]/3;
		
		P("\n");
	}
	
	system("cls");
	for(i=0;i<5;i++)
	{
		P("\n------------------------------\n");
		P(" Details Of %d Students :\n",i+1);
		P("------------------------------\n");
		P("%s (%d)\n",s1[i].name,s1[i].id);
		P("Chemistry :%d\n",s1[i].chemistry);
		P("Physics :%d\n",s1[i].physics);
		P("Maths :%d\n",s1[i].maths);
		P("Total :%d\n",total[i]);
		P("Per :%d\n",per[i]);
	}
}
