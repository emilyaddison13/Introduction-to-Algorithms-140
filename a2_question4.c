/*
Emily Addison
Assignement 2, question 4

*/



#include <stdio.h>
int main(void)
{
	int i = 3, j = 4, k = 5;
	printf("Part A\n");
	printf("%d ", i < j || ++j < k);
	printf("%d %d %d\n", i, j, k);
	
	printf("Part B\n");
	i = 7; j = 8; k = 9;
	printf("%d ", i - 7 && j++ < k);
	printf("%d %d %d\n", i, j, k);
	
	printf("Part C\n");
	i = 7; j = 8; k = 9;
	printf("%d ", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);

	printf("Part D\n");
	i = 1; j = 1; k = 1;
	printf("%d ", ++i || ++j && ++k);
	printf("%d %d %d", i, j, k);


	

	
	return 0;
}