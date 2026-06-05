//Looking and printing different data types
#include <stdio.h>
int main(){
    int number; //Declaring Interger variable
    float decimal; //Declaring Float variable
    char character; //Declaring a Character variable
    double fraction; //Declaring a Double variable

    //Storing all the values of the variables taken from the user
    printf("\nEnter a integer: ");
    scanf("%d", &number);
    printf("\nEnter a decimal number(takes 6-7 decimals points): ");
    scnaf("%f", &decimal);
    printf("\nEnter a character: ");
    scanf("%c", &character);
    printf("\nEnter a decimal number(takes 15-17 decimals points): ");
    scanf("%lf", &fraction);

    //Printing all the values of the variables
    printf("\nThe integer you entered is: %d\n",number);
    printf("\nThe fraction you entered is: %lf\n",fraction);
    printf("\nThe decimal you entered is: %f\n",decimal);
    printf("\nThe character you entered is: %c\n",character);

return 0;
}