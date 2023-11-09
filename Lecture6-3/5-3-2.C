#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int choice;
	clrscr();
	P("Press 1 For English\n");
	P("Press 2 For Hindi\n");
	P("Press 3 For Gujarati\n");
	P("Press Your Language Number : ");
	S("%d",&choice);

	switch(choice)
	{

		case 1:
			P("\nYou Have Choose Language English\n");
			P("Press 1 For Internet Recharge\n");
			P("Press 2 For Top - Up Recharge\n");
			P("Press 3 For Special Recharge\n");
			P("Enter Your Choice :");
			S("%d",&choice);

			switch(choice)
			{
				case 1:
					P("\n--------------------------------------------\n");
					P("You Have Successfully Done Internet Recharge\n");
					P("--------------------------------------------");
					break;
				case 2:
					P("\n--------------------------------------------\n");
					P("You Have Successfully Done Top - Up Recharge\n");
					P("--------------------------------------------");
					break;
				case 3:
					P("\n-------------------------------------------\n");
					P("You Have Successfully Done Special Recharge\n");
					P("--------------------------------------------");
					break;
			}
			break;

		case 2:
			P("\nYou Have Choose Language Hindi\n");
			P("Internet Recharge Ke Liye 1 Dabaiye\n");
			P("Top - Up Recharge Ke Liye 2 Dabaiye\n");
			P("Special Recharge Ke Liye 3 Dabaiye\n");
			P("Enter Your Choice :");
			S("%d",&choice);

			switch(choice)
			{
				case 1:
					P("\n--------------------------------------------------\n");
					P("AApne Safaltapurvak Internet Recharge Kar Liya Hai\n");
					P("--------------------------------------------------");
					break;
				case 2:
					P("\n--------------------------------------------------\n");
					P("AApne Safaltapurvak Top - Up Recharge Kar Liya Hai\n");
					P("--------------------------------------------------");
					break;
				case 3:
					P("\n-------------------------------------------------\n");
					P("AApne Safaltapurvak Special Recharge Kar Liya Hai\n");
					P("-------------------------------------------------");
					break;
			}
			break;

		case 3:
			P("\nYou Have Choose Language Gujarati\n");
			P("Internet Recharge Mate 1 Dabavo\n");
			P("Top - Up Recharge Mate 2 Dabavo\n");
			P("special Recharge Mate 3 Dabavo\n");
			P("Enter Your Choice :");
			S("%d",&choice);

			switch(choice)
			{
				case 1:
					P("\n----------------------------------------------\n");
					P("Tame Safaltapurvak Internet Recharge Karyu Che\n");
					P("--------------------------------------------");
					break;
				case 2:
					P("\n----------------------------------------------\n");
					P("Tame Safaltapurvak Top - Up Recharge Karyu Che\n");
					P("----------------------------------------------");
					break;
				case 3:
					P("\n---------------------------------------------\n");
					P("Tame Safaltapurvak Special Recharge Karyu Che\n");
					P("---------------------------------------------");
					break;
			}
			break;

	}
	getch();
}
