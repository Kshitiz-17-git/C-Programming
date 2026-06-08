// Perform bitwise complement operation
#include <stdio.h>
int main(){
    //Declaring variable
    int num;

    //Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    //Printing the result using bitwise complement operator
    printf("The Bitwise Complement of %d is %d\n", num, ~num);

return 0;
}