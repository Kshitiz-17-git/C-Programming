#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a==b)
    {
        printf("Both the number are equal");
    }if(a > b){
        printf("%d is greater than %d", a, b);
    }else{
        printf("%d is smaller than %d", a, b);
    }

return 0;
}