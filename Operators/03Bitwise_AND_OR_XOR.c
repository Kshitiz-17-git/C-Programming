//Perform bitwise AND, OR, XOR operations 
#include <stdio.h>
int main(){
    //Declaring variables
    int a, b;

    //Taking input from user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    //Printing the results using bitwise operators
    printf("The Bitwise AND of %d and %d is %d\n", a, b, a&b);
    printf("The Bitwise OR of %d and %d is %d\n", a, b, a|b);
    printf("The Bitwise XOR of %d and %d is %d\n", a, b, a^b);

return 0;
}