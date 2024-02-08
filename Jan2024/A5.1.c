#include <stdio.h>

int main (void)
{
	int guess_input;
	
	printf("\nPlease enter a whole number: ");
	scanf("%d", &guess_input);
	
	if(guess_input == 1)
		printf("Right number!\nWell done.\n");
	return 0;

}
