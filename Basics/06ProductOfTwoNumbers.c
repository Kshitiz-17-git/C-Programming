//Code for the product of two numbers
#include <stdio.h>
int main() {
    //Declaring the variables
    int firstNumber, secondNumber, product;

    //Taking the values of firstNumber and secondNumber
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    
    //Calculate the problem using the '*' operator
    product=firstNumber*secondNumber;
    printf("The product of %d and %d is %d\n", firstNumber, secondNumber, product);
    
return 0;
}