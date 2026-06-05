//Code for the difference of two numbers
#include <stdio.h>
int main() {
    //Declaring the variables
    int firstNumber, secondNumber, difference;

    //Taking the values of firstNumber and secondNumber
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    //Calculate the problem using the '-' operator
    difference=firstNumber-secondNumber;
    printf("The difference of %d and %d is %d\n", firstNumber, secondNumber, difference);

return 0;
}