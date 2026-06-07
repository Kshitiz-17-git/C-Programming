//Program to find the cube of a number
#include <stdio.h>

int main() {
    //Declaring the variables
    int number, cube;

    //Taking value from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    //Calculating the cube
    cube = number * number * number;

    //Printing the result
    printf("Cube of %d is %d\n", number, cube);

return 0;
}