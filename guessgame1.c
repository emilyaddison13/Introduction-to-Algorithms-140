/*
Emily Addison
Lab 5
November 4th, 2016
*/
#include<stdio.h>
#include <stdlib.h>
# include <time.h>
int main(void)

{
	int randnum, guess;
	int tries;
	srand(time(NULL));
	randnum = rand() % 50 + 1; //select a random number
	
	printf("Guess a number between 1 and 50..\n");
	scanf("%d", &guess);
	
	for(tries=1; tries < 10; tries++) //loop to interpret user input 
	{
		if(guess > randnum)
		{
			printf("Too high...\n");
			scanf("%d", &guess);
		}
		if(guess<randnum)
		{
			printf("Too low...\n");
			scanf("%d", &guess);
		}
			
		if (guess == randnum)
		{
			printf("Correct!! The number is %d ", randnum);
			break;
		}
	}
	
	if(tries == 10) // if statement for if tries is equal to the limit of 10
		{
			printf("Sorry the number was %d ", randnum);
		}
	return 0;
}
