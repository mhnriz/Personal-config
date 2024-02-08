#include <stdio.h>

int main(){

	int count = 1;
	float result;
	
	while(count <= 100){
		
		result = count %3;
		if(result == 0){
			printf("%d\n", count);
		}
		count++;
	
	}
	
}
