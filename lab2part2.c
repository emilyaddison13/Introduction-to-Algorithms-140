/* 
Emily Addison
Lab 2 Part 2
October 5th, 2016
*/




#include <stdio.h>
int main(void)
{
	int number, month,day, year; //Integers and floats are assigned
	float price;
	
	

	//User input is asked and assigned to variables
	
	printf("Enter Item Number");
	scanf(" %d", &number);
	printf("Enter the Item price");
	scanf("%f", &price);
	printf("Enter the Purchase date");
	scanf("%d%d%d", &day,&month,&year);
	
	printf("\nitem \t item \t\t purchase \n \t price \t\t date\n---- \t ---- \t\t ----\n%d \t %.2f \t\t%d/%d/%d", number, price, month, day, year); //Input is printed out in proper order
	
	

	
	return 0;
}