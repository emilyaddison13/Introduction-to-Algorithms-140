/* Question three
 Emily Addison 
 2016-11-02.
*/

#include <stdio.h>
int main(void)
{
	int i = 1; // Establish variables
	printf("Question one:");
	while (i <= 128) { // while loop 
	printf("%d \n", i);
	i *= 2;
	}
	
	i = 9384; // establish variables again 
	printf("Question Two:\n");
	do { // do while loop
	printf("%d\n ", i);
	i /= 10;
	} while (i > 0);
	
	i = 5;
	int j = i - 1; // Establish variables again 
	printf("Question Three\n");
	for (; i > 0, j > 0; --i, j = i-1)// for loop
	printf("%d\n ", i);

	
	
	
	
	return 0;
}