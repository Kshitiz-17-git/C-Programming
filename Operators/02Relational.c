//Program to check the relationship between two numbers using relational operators
#include <stdio.h>

int main() {
    //Declaring the variables
    int a, b;

    //Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    //Printing the results using relational operators if True it will print 1 else it will print 0
    printf("Equal to (%d == %d): %d\n", a, b, a == b);
    printf("Not Equal to (%d != %d): %d\n", a, b, a != b);
    printf("Less than (%d < %d): %d\n", a, b, a < b);
    printf("Greater than (%d > %d): %d\n", a, b, a > b);
    printf("Less than or Equal to (%d <= %d): %d\n", a, b, a <= b);
    printf("Greater than or Equal to (%d >= %d): %d\n", a, b, a >= b);

return 0;
}