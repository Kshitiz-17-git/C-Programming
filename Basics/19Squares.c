//Program to find the square of a number
#include <stdio.h>

int main() {
    //Declaring the variables
    int number, square;

    //Taking value from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    //Calculating the square
    square = number * number;
    
    //Printing the result
    printf("Square of %d is %d\n", number, square);

return 0;
}