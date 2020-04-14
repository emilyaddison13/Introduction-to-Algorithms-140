/*
Emily Addison
Assignement 5
Question 5
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gcd(int m, int n);

int main()
 {
	 int m, n;
	srand(time(NULL));
	m = rand() % 99 + 2; //select a random number for m
	
	n = rand() % 99 + 2; //select a random number for namespace
	
	gcd(m,n);
	printf("The GCD of %d, %d is %d", m, n,gcd(m,n)); //print the final product
	return 0;
 }
 
 int gcd(int m, int n)
 {
	 if (n == 0){ //check the if the digit is o
		 return m;
	 }
	 else{
		return gcd(n, m%n); // return code if not 0
	 }
	 
 }
 
 