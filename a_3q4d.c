/* question 4d 
 Emily Addison 
 2016-11-02.
*/



#include <stdio.h>
#include <math.h>
int main(void)
{
	float x = 10.0; //integers 
	while(x > 1.001){ //while loop 
	 
	x = sqrt(x);
	printf("%f", x);
	}
	if (x > 10){ // if statement 
	printf("Loop is not needed");
	}
	return 0;
	
}
	