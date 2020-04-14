/* 
Emily Addison
Lab 2 Part 1
October 5th, 2016
*/
#include <stdio.h>
int main(void)
{
	int i, hour, minute, second; //Integers and floats are established
	float x;
	
	i = 40000;
	x = 1.234;
	

	
	printf("i = %-15.8d, x = %9.3f ", i, x); // Specific restraints are given for the digits and demonstrated
	printf("\nEnter the current Hour");
	scanf("%d", &hour);
	printf("Enter the current Minute"); // Asks for user input of the time 
	scanf("%d", &minute);
	printf("Enter the current Second");
	scanf("%d", &second);
	
	
	printf("The current time is %d:%d:%d",hour, minute, second); //User input is printed out in the proper format

	
	return 0;
}