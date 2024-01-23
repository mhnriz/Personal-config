#include <stdio.h>

int main (void)
{
	char name [15];
	char grade;
	
	printf("Please enter your name : ");
	scanf("%s", name);
	printf("Greetings %s, please enter your grade : ", name);
	scanf("%c", &grade);
	printf("Well done %s!, your grade is %c \n", name, grade);
}
