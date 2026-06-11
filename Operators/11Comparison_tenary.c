//Print the greater number between two numbers using ternary operator
#include <stdio.h>
int main(){
    int a, b;

    //input the value
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    //check the condition
    printf("%d is %s than %d", a, (a > b) ? "Greater" : "Smaller", b);
    
return 0;
}