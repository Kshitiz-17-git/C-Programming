//Converting Temperature from Celsius to Fahrenheit
#include <stdio.h>
int main() {
    float Celsius, Fahrenheit;

    //Taking the temperature in Celsius
    printf("Enter the temperature in Celsius:");
    scanf("%f", &Celsius);

    //Converting the temperature from Celsius to Fahrenheit
    Fahrenheit=((Celsius*9)/5)+32;
    printf("%f Celsius is equal to %f Fahrenheit\n", Celsius, Fahrenheit);

return 0;
}