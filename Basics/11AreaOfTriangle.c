//Program for the area of a triangle
#include <stdio.h>
int main() {
    //Declaring the variables
    int base, height, area;

    //Taking the values of base and height
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    
    //Calculating the area using the mathematical formula (b×h)/2
    area=base*height/2;
    printf("The area of the triangle is %d\n", area);

return 0;
}