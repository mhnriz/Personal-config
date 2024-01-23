#include <stdio.h>

int main()
{
	printf("Hello world\n");
	printf("Result1: %d\t%c\t%f\n", 49, 'A', 48.234);
	printf("Result2: %d\t%c\t%f\n", 49, 'A', 48.234);
	printf("Result3: %d\t%c\t%f\n", 49, 'A', 48.234);
	printf("Result4: %d\t%c\t%6.2f\n", 49, 'A', 48.234);
	printf("Result5: %d\t%c\t%-6.2f\n", 49, 'A', 48.234);
	printf("Result5: %d\t%c\t%+6.2f\n", 49, 'A', 48.234);
	
	printf("d=%d, o=%o, h=%#x", 12, 13, 14);
}
