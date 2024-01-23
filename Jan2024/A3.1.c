#include <stdio.h>
//#include <math.h>
#define PI 3.1415926

int main(void)
{
	double radius;
	double area;
	
	printf("Enter radius : ");
	scanf("%lf", &radius);
	area = PI * radius * radius; //pow(radius, 2)
	printf("Area in floating point notaton: %f\n", area);
	return 0;
}

