/*
Emily Addison
Assignement 2, question 6

*/



#include <stdio.h>
int main(void)
{
	int num1, num2, num3, num4, large1,large2,low1,low2;
	
	printf("Enter four integers"); //Prompt the user to enter in 4 digits
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4 );
	
	if (num1 > num2) // Find out hat the largest number is by going through the else and if statements
		large1 = num1,low1 = num2;
	else
		large1 = num2, low1 = num1;
		
	if (num3 > num4)
		large2 = num3,low2 = num4;
	else
		large2 = num4, low2 = num3;
		
	
	if (large1 < large2)
		large1 = large2;
	

	
	printf("The largest number is %d", large1); // print the largest number 

	
	return 0;
}