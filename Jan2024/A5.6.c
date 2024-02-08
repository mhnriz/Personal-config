#include <stdio.h>

int main(void)
{
    int num, ans;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 1 || num <= 10) {
	ans = num*num;
	printf("%d to the power of 2 is %d\n", num, ans);
	}
    else{
    	printf("The number is out of range.\n");
	printf("Please try again!\n\n");
    }
    return 0;
}
