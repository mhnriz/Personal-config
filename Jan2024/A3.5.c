#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main(void)
{
	double radius;
	double area;
	double circumference;
	double volume;
	
	//About me
	printf("Name:\t\tMuhammad Hariz Naim bin Muhammad Jamali\n");
	printf("Student ID:\t22008354\n");
	printf("Program:\tElectrical & Electronics Engineering\n\n");
	
	//Area of a circle
	printf("Area of a cirle\n");
	printf("Enter radius : ");
	scanf("%lf", &radius);
	area = PI * pow(radius, 2);
	printf("Area of the circle: %f\n", area);
	
	//Circumference of a circle
	printf("\nCircumference of a circle\n");
	printf("Enter radius: ");
	scanf("%lf", &radius);
	circumference = 2*(PI * radius);
	printf("Circumference of the circle: %f\n", circumference);
	
	//Volume of a circle
	printf("\nVolume of a circle\n");
	printf("Enter radius: ");
	scanf("%lf", &radius);
	volume = 4*(PI * pow(radius,3));
	printf("Circumference of the circle: %f\n", volume);
	
	return 0;
}

