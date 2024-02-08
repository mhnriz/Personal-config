#include <stdio.h>
int main()
{
	//a = 5(00000101), b = 9(00001001)
	char a=5, b=9;
	printf("a>>1 = %d\n", (a>>1));
	printf("b>>1 = %d\n", (b>>1));
	
	//condiontal operator (ternary)
	int i = 5, j = 10;
	int max = (i>j)?i:j;
	printf("Maximum between %d and %d is %d\n", i, j, max);
}
