/* 
Emily Addison
Lab 3 
October 7th, 2016
*/




#include <stdio.h>
int main(void)
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9; //create integers
	int sum, remainder, sub;
	
	printf("Enter the first 9 digits of a 10 digit ISBN code"); // Prompt user to enter first 9 digits
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
    
    sum = (n1 * 10 + n2 * 9 + n3 * 8 + n4 * 7 + n5 * 6 + n6 * 5 + n7 * 4 + n8 * 3 + n9 * 2); // Create a factorial formula
	
	remainder = 11-(sum%11); //find the modual from 11 of your digit and then subtract it from 11
	
	
	// print the appropriate statement 
	
	if (remainder == 10)
		printf("x");
	else
		printf("The check statement is: %d", remainder);
	

	
	return 0;
}