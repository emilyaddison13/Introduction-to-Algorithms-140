/*
Emily Addison
Assignement 4, question 6

*/
#include <stdbool.h>
#include <stdio.h>


int main(void)

{
	
	int digit;
	long n, j;
	
	while (n!=0) //opens a while loop 
	{
		bool digit_seen[10] = {false}; // creates a boolean array
		printf("Enter a number: "); // prompts user to enter a number
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("Program terminated");
			break;
		}
		while(n>0) //if user enters a number greater than 0 the follwoing will occur 
		{
			digit = n % 10;
			if(digit_seen[digit]) break;
			else 
			{
				digit_seen[digit]= true;
				n/=10;
			}	
			
		}
		
		if(n>0) printf("Repeated digit\n"); // if number is greater than 0 print this 
		else
		{
			printf("No repeated digit\n"); // if number is repeated this will be printed 
			n= n+1;
		}
	}
	return 0;
	}