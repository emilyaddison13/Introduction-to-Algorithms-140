/*
Emily Addison
Lab 7 
November 11th, 2016

*/

#include <stdio.h>
#include <stdlib.h>
# include <time.h>
int main(void)
{
	int randn, students, s; 
	int GPAFreq[4] = {0};
	s = 0;
	randn = rand() % 5 + 1; //select a random number
	srand(time(NULL));
	printf("Input number of students: "); // Ask user for input
	scanf("%d", &students);
	
	while(s < students){ // while s value is less than studetns run this loop
		randn = rand() % 5 + 1; //select a random number
		printf("GPA of student %d is : %d\n", s+1, randn);
		if (randn >0 && randn < 5){
			GPAFreq[randn-1]++;
			s++;
			
		}
		else {
			printf("Invalid GPA\n");
		
		}
	}
		printf("The total number of students is %d\n", students); // Ouptut final student GPA facts
		printf("GPA 1 ---%d\n",GPAFreq[0]);
		printf("GPA 2 ---%d\n",GPAFreq[1]);
		printf("GPA 3 ---%d\n",GPAFreq[2]);
		printf("GPA 4 ---%d\n",GPAFreq[3]);
		
		return 0;
}
		
		
		
	
		
	
	