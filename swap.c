#include <stdio.h>
int main(void)
{
	int a,b,c;

	printf("Please input an integer value: ");// asks for interger 1
	scanf("%d", &a);

	printf("Please input an integer value: ");// asks for integer 2
	scanf("%d", &b);
	printf("You entered: %d\n", a);// outputs integers
	printf("You entered: %d\n", b);
	c = a; //switches the values
	a = b;
	b = c;
	printf("You entered: %d\n", a);// Outputs switched integers
	printf("You entered: %d\n", b);
	
	return 0;
}