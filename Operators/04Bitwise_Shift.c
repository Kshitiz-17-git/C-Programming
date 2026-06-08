// Perform bitwise left and right shift operations
#include <stdio.h>
int main(){
    //Declaring variables
    int num, shift;

    //Taking input from user
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the shift amount: ");
    scanf("%d", &shift);

    //Printing the results using bitwise shift operators
    printf("The Left Shift of %d is: %d\n", num, num << shift);
    printf("The Right Shift of %d is: %d\n", num, num >> shift);

return 0;
}