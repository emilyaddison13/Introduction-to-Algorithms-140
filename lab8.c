/*
Emily Addison
Lab 8
11/23/16
*/
#include <stdio.h>
/* function returning the max between two numbers */
int max(int num1, int num2) 
{

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
	
   else
      result = num2;
 
   return result; 
}
int main (void)
{
	int max(int num1, int num2);
	
	int num1,num2, result, ret;
	printf("Enter two numbers");
	scanf("%d%d", &num1, &num2);
	result = max(num1, num2);
	printf("%d", result);
	
	return 0;
	
}

