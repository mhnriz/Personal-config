#include <stdio.h>
#include <ctype.h>

int main(void){
	char guess_input;
	
	printf("\n Please enter a whole number: ");
	scanf("%c", &guess_input);
	
	if(toupper(guess_input) == 'A')
		printf("You got it right!\n");
	else
		printf("Wrong number, dude!\n");
	
	
	return 0;
}
