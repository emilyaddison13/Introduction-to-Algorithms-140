/*
Emily Addison
Assignement 4, question 2

*/



#include <stdio.h>
int main(void)
{
	int num1, num2, denom1, denom2, resultn, resultd; // Variables are stated
	char o;
	
	printf("Enter two fractions and an operation: "); // prompt user to enter both of their fractions
	scanf("%d/%d %o %d/%d", &num1, &denom1, &o, &num2, &denom2 );
	
	if (o == '+'){
		resultn = num1* denom2 +num2 * denom1; // Multiply numerator 1 by denominator 2 and add numerator 2 by denominator 1
		resultd = denom1*denom2; // denominator 1 is multiplyed by denominator 2 
		printf("The sum is %d/%d\n", resultn, resultd); // result is printed resultd = (denom1*denom2); // denominator 1 is multiplyed by denominator 2 
		
	}
	else if (o == '-'){
		resultn = num1* denom2 - num2 * denom1; // Multiply numerator 1 by denominator 2 and add numerator 2 by denominator 1
		resultd = denom1*denom2; // denominator 1 is multiplyed by denominator 2 
		printf("The difference is %d/%d\n", resultn, resultd); // result is printed resultd = (denom1*denom2); // denominator 1 is multiplyed by denominator 2 
	}
	else if (o == '*'){
		resultn =num1 * num2;
		resultd = denom1*denom2;
		printf("The product is %d/%d\n", resultn, resultd); // result is printed resultd = (denom1*denom2); // denominator 1 is multiplyed by denominator 2 
		
	}
	else if (o == '/'){
		resultn = num1 * denom2;
		resultd = num2 * denom1;
		printf("The quoitent is %d/%d\n", resultn, resultd); // result is printed resultd = (denom1*denom2); // denominator 1 is multiplyed by denominator 2 
	}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	resultn = (num1* denom2 +num2 * denom1); // Multiply numerator 1 by denominator 2 and add numerator 2 by denominator 1
	resultd = (denom1*denom2); // denominator 1 is multiplyed by denominator 2 
	
	printf("The sum is %d/%d\n", resultn, resultd); // result is printed 

	
	return 0;
}