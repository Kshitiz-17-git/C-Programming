//Program to calculate the simple interest
#include <stdio.h>
int main(){
    //Declaring the variables
    double Principal, Rate, Time, Amount, Interest;

    //Asking user to enter the values
    printf("Enter the Principal amount(without coma): ");
    scanf("%lf", &Principal);
    printf("Enter the interest rate (per annum): ");
    scanf("%lf", &Rate);
    printf("Enter the time period(in years): ");
    scanf("%lf", &Time);

    //Calculating the simple interest and amount
    Interest = (Principal*Rate*Time)/100;
    Amount = Principal + Interest;

    //Printing the result
    printf("Simple interest on principal amount %.02lf at a rate of %.02lf in the time period %.02lf is %.02lf and the final amount is %.02lf", Principal, Rate, Time, Interest, Amount);

return 0;
}