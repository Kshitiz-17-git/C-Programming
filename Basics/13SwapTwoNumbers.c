//Program to Swap two numbers
#include <stdio.h>

int main(){
    //Declaring variables
    int firstnumber, secondnumber, temp;
    
    //Taking input from the user
    printf("Before Swapping");
    printf("\nEnter First numbers:");
    scanf("%d", &firstnumber);
    printf("Enter Second Number:");
    scanf("%d", &secondnumber);

    //Swapping the numbers using temporary variable
    temp=firstnumber;
    firstnumber=secondnumber;
    secondnumber=temp;
    printf("\nAfter swapping \nFirst Number=%d \nSecond Number=%d", firstnumber, secondnumber);

return 0;    
}