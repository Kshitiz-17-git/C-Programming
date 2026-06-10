//Demonstration of Assignment Operators
#include <stdio.h>
int main(){
    //Declaration of variables
    int num1, num2;
    
    //Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    //Demonstration of += operator
    printf("First number(num1)= %d\n", num1);
    num1+=num2;
    printf("num1 += num2 gives %d\n", num1);
    
    //Demonstration of -= operator
    num1-=num2;
    printf("num1 -= num2 gives %d\n", num1);
    
    //Demonstration of *= operator
    num1*=num2;
    printf("num1 *= num2 gives %d\n", num1);
    
    //Demonstration of /= operator
    if (num2 != 0)
    {
        num1/=num2;

        //Demonstration of %= operator
        printf("num1 /= num2 gives %d\n", num1);
        num1%=num2;
        printf("num1 %%= num2 gives %d\n", num1);
    }else{
        printf("You can't divide by zero");
    }
    
return 0;
}