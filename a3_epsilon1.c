/* Question 6 
 Emily Addison 
 2016-11-02.
*/



#include <stdio.h>
int main(void)
{
	float i = 1; // integers and floats 
	float epsilon;
	float term= 1.0;
	
	float eps;
	float fact = 1;
	
	printf("Enter a small float value for epilison: ");
	scanf("%f", &epsilon);
	
	while(term >= epsilon){ // while loop 
		eps = eps + term;
		fact = fact * i;// terms in while loop 
		i = i+ 1;
		term = 1 / fact;
	}
	
	printf("Approximation of eps: %f", eps); //print statment 
	
	return 0;
}