/*
Emily Addison
Assignement 3

*/



#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	i = 3;
	for (i = 3; i>=1; i--){
	

	
	int grade = rand()%5;
	
	/*printf("Enter your grade:");
	scanf("%d",&grade);
	*/
	if ((grade <=0) || (grade > 4)){
		
		printf("Grade invalid");
	}
		
	
		
	else if(grade<2 && grade>0){
		
		printf("Fail");
	}
	
	else if(grade>2){
		
		printf("Pass");
	}
	
	else if(grade==0){
		
		printf("Get help");
	}
	}
	
	 
	 
	




	

	
	return 0;
}