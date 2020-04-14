/*
Emily Addison
Assignement 3
Question 1 

*/
//correction on question 1 to make it simpler


#include <stdio.h>
int main(void)
{
	
	int age, true, false; //integers 
	
	printf("Enter your age:");
	scanf("%d",&age);
	if (age >=13 && age <= 19){ //if statements 
		age = true;
		printf("You are a teenager!");// print statments 
	}
		
	
		
	else{ //else statements 
		age = false;
		printf("You are not a teenager");
	}
	
	
	 
	 
	




	

	
	return 0;
}