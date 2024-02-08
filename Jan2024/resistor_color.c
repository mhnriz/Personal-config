#include <stdio.h>

int main(void)
{

	int choice;
	
	printf("Resistor color code. Pick a number: ");
	scanf("%d", &choice);
	
	if(choice ==0)
		printf("Black colour resistor\n");
	else if(choice ==1)
		printf("brown colour resistor\n");
	else if(choice ==2)
		printf("Red colour resistor\n");
	else if(choice ==3)
		printf("Orange colour resistor\n");
	else if(choice ==4)
		printf("Yellow colour resistor\n");
	else if(choice ==5)
		printf("Green colour resistor\n");
	else if(choice ==6)
		printf("Blue colour resistor\n");
	else if(choice ==7)
		printf("Voilet colour resistor\n");					
	else if(choice ==8)
		printf("Grey colour resistorn\n");
	else if(choice ==9)
		printf("White colour resistor\n");
	else
		printf("Invalid choice.\n");
	return 0;
}
