#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a>0)
    {
        printf("%d is a positive number", a);
    }if(a<0){
        printf("%d is a negative number", a);
    }else{
        printf("Zero is neither positive nor negative");
    }
    
return 0;
}