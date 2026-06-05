//Program to swap two numbers without using any third variable
#include <stdio.h>
int main(){
    //Declaring Variables
    int firstnumber, secondnumber;
    
    //Taking input from the user
    printf("Before Swapping");
    printf("\nEnter First numbers:");
    scanf("%d", &firstnumber);
    printf("Enter Second Number:");
    scanf("%d", &secondnumber);

    //Swapping two numbers using addition and subtraction
    firstnumber+=secondnumber;
    secondnumber=firstnumber-secondnumber;
    firstnumber-=secondnumber;

    //Printing the swapped numbers
    printf("After swapping \nFirst Number=%d \nSecond Number=%d", firstnumber, secondnumber);

return 0;
}