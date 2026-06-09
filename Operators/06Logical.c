// Logical operators
#include <stdio.h>

int main() {
    //Declaring variables
    int a, b;

    //Taking input from user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    //Printing the results using logical operators
    printf("%d && %d: %d\n", a, b, a && b);
    printf("%d || %d: %d\n", a, b, a || b);
    printf("!%d: %d\n", a, !a);

return 0;
}