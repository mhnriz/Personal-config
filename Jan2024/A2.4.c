#include <stdio.h>

int main(void){
	int Answer1, Answer2, Number1, Number2;
	Number1 = 4;
	Number2 = 4;
	
	Answer1 = Number1++;
	Answer2 = Number2--;
	
	printf("\n %d, %d", Answer1, Number1);
	printf("\n %d, %d", Answer2, Number2);
	
	return 0;
}
