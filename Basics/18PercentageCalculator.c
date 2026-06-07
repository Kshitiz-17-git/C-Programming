//Program to calculate percentage
#include <stdio.h>

int main() {
    //Declaring the variables
    float Part, Whole, Percentage;

    //Taking values from the user
    printf("Enter value of the Part: ");
    scanf("%f", &Part);
    printf("Enter the whole value: ");
    scanf("%f", &Whole);

    //Calculating the percentage
    Percentage = (Part / Whole) * 100;

    //Printing the result
    printf("Percentage: %.2f%%\n", Percentage);
    
return 0;
}