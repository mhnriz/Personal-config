#include <stdio.h>

int main(){


	int num;
	
	do{
		printf("Enter a number from 1 to 10: ");
		scanf("%d", &num);
		if(num > 10 || num < 1)
			printf("Invalid input.\n");
	} while(num > 10 || num < 1);
	
	
	
	//int count;
	//count = 0;
	 
	//do{
	//	printf("The value of count is %d\n", count);
	//	count = count +1; //count++
	//	
	//} while(count < 6);
}
