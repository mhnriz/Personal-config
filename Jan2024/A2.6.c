#include <stdio.h>

int main(void){
	int firstNo, secondNo, result;
	
	printf("Enter a number: "); 
	scanf("%d", &firstNo);
	printf("Enter a number: ");
	scanf("%d", &secondNo);
	
	result = firstNo + secondNo;
	
	printf("\n%d +%d = %d\n", firstNo, secondNo, result);
	return 0;
}
