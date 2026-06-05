//Program for the area of a circle
#include <stdio.h>
int main() {
    //Declaring the variables
    int radius, area;

    //Taking the value of radius
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    
    //Calculating the area using the mathematical formula of circle πr²
    area=3.14*radius*radius;
    printf("The area of the circle is %d\n", area);

return 0;
}