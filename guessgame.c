/*
Emily Addison
Lab 5
October 28th, 2016
*/



#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	
	int i , goal;
	int guess = rand( ) % 50 + 1; 
	
	
	for (goal = 1; goal<11; goal++){
		
	
	
	printf("Enter a digit between 1 and 50: ");
	scanf("%d", &i );
	 
	if (i == guess ){
		printf("You have guessed the correct number");
	 }
	else if (i < guess){
		 printf("Too low.........");
	 }
	else if (i > guess){
		printf("Too high...........");
	
	}
	else if (goal == 10){
		printf("You have guessed to many times, the proper number was: %d", guess);
	}
	}
	
	
	return 0;
}