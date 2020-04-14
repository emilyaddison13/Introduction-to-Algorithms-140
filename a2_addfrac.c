/*
Emily Addison
Assignement 2, question 1 

*/



#include <stdio.h>
int main(void)
{
	int num1, num2, denom1, denom2, resultn, resultd; // Variables are stated
	
	printf("Enter both fractions seperated by a + sign"); // prompt user to enter both of their fractions
	scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2 );
	
	resultn = (num1* denom2 +num2 * denom1); // Multiply numerator 1 by denominator 2 and add numerator 2 by denominator 1
	resultd = (denom1*denom2); // denominator 1 is multiplyed by denominator 2 
	
	printf("The sum is %d/%d\n", resultn, resultd); // result is printed 

	
	return 0;
}