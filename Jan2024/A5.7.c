#include <stdio.h>

int main(void)
{
	 int user_entry;
	 
	 printf("Please enter a whole number between 1 and 4: \n");
	 scanf("%d", &user_entry);
	 
	 if(user_entry ==1)
	 {
	 	printf("Number One\n");
	 }
	 else if(user_entry ==2){
	 	printf("Number Two\n");
	 }
	 else if(user_entry ==3){
	 	printf("Number Three\n");
	 }
	 else if(user_entry ==4){
	 	printf("Number Four\n");
	 }
	 return 0;
}
