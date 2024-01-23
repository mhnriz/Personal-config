#include <stdio.h>
#include <limits.h>
int main()
{
	int a;
	short x;
	long b;
	char c;
	float d;
	double e;
	
	printf("Int: /t min = %d, max = %d\n", INT_MIN, INT_MAX);
		
	printf("Size of int = %zu bytes\n", sizeof(a));
	
	return 0;

}
