#include <stdio.h>
#include <string.h>

int main(){

	char name[25];
	int age; 
	
	printf("\n What's your name?\n");
	//scanf("%s", &name); // scanf doesn't accept blank spaces
	fgets(name, 25, stdin); // include blank spaces but add a \n how string last character
	name[strlen(name)-1] = '\0'; // this is the way to remove that last character

	printf("\nHello %s, How old are you?\n",name);
	scanf("%d",&age);
	printf("Your are %d years old\n",age);


	return 0;
}
