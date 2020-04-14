/*
Emily Addison
Lab 8
11/24/2016
*/

#include<stdio.h>
#include<math.h>
int readNum(); 
int isPrime(int x);
int findPrimeCount(int num, int prime);

int main(void) // main function
{
	int input = readNum();
	int prime = 2;
	printf("%d= ",input);
	while (input = findPrimeCount(input,prime))
	{
		while(!(isPrime(++prime)));
	}
	return 0;
}

int readNum() //function #1 to read the number inputed by the user
{
	int x;
	while(1)
	{
		printf("Enter a number(>1)");
		scanf("%d",&x);
		if(x>1) return x;
	printf("invalid number");
	}
}
int isPrime(int x) //function #2 to check if readnum input is a prime number
{
	int i, p_flag = 0;
	for (i=2;i<=x/2;++i)
	{
		if(x%i==0 && i != x)
		return 0;
	}
	return 1;
}

int findPrimeCount(int num, int prime) //function #3 to find the prime equation idea
{
	if(num==1) return 0;
	int count = 0;
	
	while (num%prime==0)
	{
		count++;
		num /= prime;
	}
	
	if (count>0)
	{
		printf("(%d^%d)",prime,count);
		if (num!=1) printf(" x ");
	}
	return num;
}