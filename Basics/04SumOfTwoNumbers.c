//Code for add two numbers
#include <stdio.h>
int main(){
    //Declaring the required variables
    int firstNumber, secondNumber, sum;

    //Takes two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    //Calculate the problem using the '+' operator
    sum=firstNumber+secondNumber;
    printf("The sum of %d and %d is %d\n", firstNumber, secondNumber, sum);

return 0;
}