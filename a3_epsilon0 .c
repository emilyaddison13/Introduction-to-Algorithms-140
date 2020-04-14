/* Question 5 
 Emily Addison 
 2016-11-02.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    
    float e = 1, fact = 1, term = 0, userInput; //floats assigned 
    
    printf("Please enter a number to aproximate e to: "); // print statement 
    scanf("%f", &userInput);
    
    while (term <= userInput) { // while loop 
        term ++; //conditions of while loop 
        fact *= term;
        e += 1/fact;
    }
    printf("The constant e is about: %f \n", e); //print statment 
    
    return 0;

}