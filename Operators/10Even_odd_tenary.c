//Write a C program to check whether a number is even or odd using ternary operator
#include <stdio.h>
int main(){
    int num;
    
    //Input the value
    printf("Enter a number: ");
    scanf("%d", &num);

    //check the number is even or odd
    printf("%d is %s", num, (num % 2 == 0) ? "Even number" : "Odd number");
    
return 0;
}