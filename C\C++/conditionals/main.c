#include <stdio.h>
#include <ctype.h>

/* A small program to test if and switch statement*/

int main()
{

	char grade;

	printf("\nWhat is your grade?\n");
	scanf("%c", &grade);
	
	grade = tolower(grade);

	// if statement
	//
	printf("\nIf statement\n");

	if(grade=='a')
	{
		printf("You have the best score congratulations");
	}
	else if (grade == 'b')
	{
		printf("You have a good score, well done.");
	}
	else if (grade == 'c')
	{
		printf("Well you pass at less");
	}
	else
	{
		printf("What happened? You don't pass");
	}
	
	// switch statement
	//
	printf("\n\nSwitch statement\n");
	
	switch(grade){

		case 'a':
			printf("You have the best score congratulations\n");
			break;

		case 'b':
			printf("You have a good score, well done.\n");
			break;

		case 'c':
			printf("Well you pass at less\n");
			break;

		default:
			printf("What happened? You don't pass\n");
			break;
	}
	
	


	return 0;
}
