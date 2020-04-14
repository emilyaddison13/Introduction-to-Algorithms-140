
/* Question 2 
 Emily Addison 
 2016-11-02.
*/

#include <stdio.h>
int main(void)
{
	int dig1, dig2;
	printf("Enter a digit: ");
	scanf("%1d%1d", &dig1, &dig2);
	
	printf("Your number is: "); //switeches second digit if first digit is one
	if(dig1 == 1)
	{
		switch(dig2 % 10){
			case 0:
			printf("Ten");
			break;
			
			case 1:
			printf("Eleven");
			break;
			
			case 2:
			printf("Twelve");
			break;
			
			case 3:
			printf("Thirteen");
			break;
			
			case 4:
			printf("Fourteen");
			break;
			
			case 5:
			printf("Fifteen");
			break;
			
			case 6:
			printf("Sixteen");
			break;
			
			case 7:
			printf("Seventeen");
			break;
			
			case 8:
			printf("Eighteen");
			break;
			
			case 9:
			printf("Nineteen");
			break;
		}
		return 0;
	}
	
	switch(dig1 % 10){ // swirches  first digit 
	
	case 2: 
	printf("Twenty"); 
	break;
	
	case 3:
	printf("Thirty");
	break;
	
	case 4:
	printf("Fourty");
	break;
	
	case 5:
	printf("Fifty");
	break;
	
	case 6:
	printf("Sixty");
	break;
	
	case 7:
	printf("Seventy");
	break;
	
	case 8:
	printf("Eighty");
	break;
	
	case 9: 
	printf("Ninety");
	break;
	}
	
	
	switch(dig2 % 10){ // Switches second digit 
	
	case 1:
	printf("One");
	break;
	
	case 2:
	printf("Two");
	break;
	
	case 3:
	printf("Three");
	break;
	
	case 4:
	printf("Four");
	break;
	
	case 5:
	printf("Five");
	break;
	
	case 6:
	printf("Six");
	break;
	
	case 7:
	printf("Seven");
	break;
	
	case 8:
	printf("Eight");
	break;
	
	case 9:
	printf("Nine");
	break;
	}
	
return 0;
}


