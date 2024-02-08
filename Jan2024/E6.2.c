#include <stdio.h>

int main(){

	int min, max, div, count, check=1;
	float result;
	
	while(check){
		do{
		printf("Enter min value: ");
		scanf("%d", &min);
		printf("Enter max value: ");
		scanf("%d", &max);
		}while(min > max);
		
		do{
			do{
			printf("Enter div value: ");
			scanf("%d", &div);
			}while(div < 1 || div > 11);
		}while(!(min < div < max));
		
		check = 0;
	}
	count = min;
	while(count >= min && count <= max){
		result = count %div;
		if(result == 0){
			printf("%d\n", count);
		}
		
		count++;
	}

}
