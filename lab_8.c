/*
Emily Addison
Lab 8
11/24/16
*/
#include <stdio.h>
//int num, i, flag=0)
int isprime(int num)
{
	
	
	
	int flag = 0;
	int i;
	
	for(i=2; i<=num/2; ++i)
    {
        // condition for nonprime number
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        return 1;
    else
        return 0;
	return num;
}
int readnum ()
{
	int num, i, flag=0, result;
	int k = 10;
	for(k = 10; k < 11; --k){
	printf("Enter a number larger than 1: ");
	scanf("%d",&num);
	isprime(num);
	break;
	}
}
	
int findPrimeCount(int num, int prime)
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
		
int main (void)
{
	readNum();
	int prime = 2;
	printf("%d= ",num);
	while (findPrimeCount(input,prime))
	{
		while(!(isPrime(++prime)));
	}-
	/*readnum();
	findPrimeCount(int num, int prime);
	int num, i, flag=0, result;
	*/
	
    
    return 0;
}
