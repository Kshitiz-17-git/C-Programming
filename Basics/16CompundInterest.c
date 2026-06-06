// Program to calculate the compound interest
#include <stdio.h>
#include <math.h>//For using the pow function

int main() {
    // Declaring the variables
    float principal, rate, time, compoundInterest;
    int n;

    //Taking values from the user
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculating the compound interest
    compoundInterest = principal * pow((1 + rate / (100 * n)), n * time) - principal;

    // Printing the result
    printf("Compound Interest: %.2f\n", compoundInterest);

return 0;
}