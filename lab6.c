/*
Emily Addison
Lab 6 
November 11th, 2016

*/

#include <stdio.h>
int main(void)
{
	int tries, check, code, change;
	tries = 0;
	
	
	for (tries = 0; tries < 6; tries++){ //for loop to execute the program
		printf("Enter your pin code: "); //ask the user for the pin code
		scanf("%d", &code);
		change = code;
		if (code >9999 && code< 100000){ // check is code is between these boundries
			while(change > 0){ // if code is between the boundries check if each digit is under %3
				check = change%10;
				if (check % 3 == 0) change = change/10;
				else break;
			}
		}
		if (change <= 0)// if corect print Valid
		{
			printf("Valid argument %d\n", code);
			break;
			
		}
		else printf("Invalid argument\n");//if incorrect print Invalid
			
			
		
				
			
			
			
			
	}			
		
		if (tries == 6) printf("INTRUDER ALERT!"); // if tries is more than 6 print intruder alert
		
		
		
			
			
	return 0;		
}