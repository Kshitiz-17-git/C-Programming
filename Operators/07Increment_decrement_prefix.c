#include <stdio.h>
int main(){
    //Declaring variables
    int num;

    //Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    //Printing the results using increment and decrement operators
    printf("Original Number: %d\n", num);
    printf("++num: %d\n", ++num);
    printf("After increment: %d\n", num);
    printf("--num: %d\n", --num);
    printf("After decrement: %d\n", num);
return 0;
}