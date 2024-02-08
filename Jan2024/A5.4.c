#include <stdio.h>

int main(void)
{
	int a,b;
	printf("\nenter two number.");
	printf("\nleave a space between the two number: ");
	scanf("%d%d", &a, &b);
	
	if(a==b)
		printf("The number are equal\n");
	if(a != b)
		printf("The numbers are NOT equal\n");
	if(a <b)
		printf("%d is less than %d\n", a ,b);
	if(a >b)
	    	printf("%d is more than %d\n", a, b);

	return 0;
}
