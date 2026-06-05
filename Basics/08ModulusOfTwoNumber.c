//Program for the modulus of two numbers
#include <stdio.h>
int main() {
    //Declaring the variables
    int firstNumber, secondNumber, modulus;

    //Taking the values of firstNumber and secondNumber
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    //Calculate the problem using the '%' operator
    modulus=firstNumber%secondNumber;
    printf("The modulus of %d and %d is %d\n", firstNumber, secondNumber, modulus);

return 0;
}