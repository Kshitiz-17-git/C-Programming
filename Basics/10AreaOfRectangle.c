//Calculating the Area of a Rectangle
#include <stdio.h>
int main() {
    //Declaring the variables
    int length, width, area;

    //Taking the values of length and width
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    
    //Calculating the area using the mathematical formula of rectangle (l×w)
    area=length*width;
    printf("The area of the rectangle is %d\n", area);

return 0;
}