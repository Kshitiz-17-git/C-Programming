#include <stdio.h>

int main(){
    float maths, eng, sci, avg;

    printf("Enter your maths marks: ");
    scanf("%f", &maths);
    printf("Enter your english marks: ");
    scanf("%f", &eng);
    printf("Enter your science marks: ");
    scanf("%f", &sci);

    printf("Average: %.2f", ((maths+eng+sci)/3));

    return 0;
}