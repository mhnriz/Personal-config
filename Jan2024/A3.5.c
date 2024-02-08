#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main(void)
{
	double radius;
	double result;
	
	//About me
	printf("Name:\t\tMuhammad Hariz Naim bin Muhammad Jamali\n");
	printf("Student ID:\t22008354\n");
	printf("Program:\tElectrical & Electronics Engineering\n\n");
	
	//Area of a circle
	printf("Area of a cirle\n");
	printf("Enter radius : ");
	scanf("%lf", &radius);
	result = PI * pow(radius, 2);
	printf("Area of the circle: %f m^2\n", result);
	
	//Circumference of a circle
	printf("\nCircumference of a circle\n");
	printf("Enter radius: ");
	scanf("%lf", &radius);
	result = 2*(PI * radius);
	printf("Circumference of the circle: %f m\n", result);
	
	//Volume of a circle
	printf("\nVolume of a circle\n");
	printf("Enter radius: ");
	scanf("%lf", &radius);
	result = (4*(PI * pow(radius,3)))/3;
	printf("Volume of the circle: %f m^3\n", result);
	
	
	return 0;
}

