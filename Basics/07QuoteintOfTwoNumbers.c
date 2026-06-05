// Division two numbers
#include <stdio.h>

int main() {
    //Declaring the variables
    float firstNumber, secondNumber, quotient;

    //Taking the values of firstNumber and secondNumber
    printf("Enter dividend: ");
    scanf("%f", &firstNumber);
    printf("Enter divisor: ");
    scanf("%f", &secondNumber);
    
    if (secondNumber != 0) {
        quotient = firstNumber / secondNumber;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    
return 0;
}