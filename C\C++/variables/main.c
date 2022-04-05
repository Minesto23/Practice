#include <stdio.h>
#include <stdbool.h>

int main ()
{
	//variables
	
	int x; //declaration
	x = 123; //inicialization
	int y = 321;//declaration & inicialization
	
	int age = 21; //integer
	float gpa = 2.05; //floating point number
	char grade = 'A'; //single character 
	char name[] = "bro"; //array of characters
	bool e = true; //boolian true or false

	printf("Hello %s\n",name);
	printf("You are %d years old\n",age);
	printf("Your average grade is %c\n",grade);
	printf("Your gpa is %.2f\n",gpa);


	return 0;

}
