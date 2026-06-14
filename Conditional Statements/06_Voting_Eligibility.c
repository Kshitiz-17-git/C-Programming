#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Voter is eligible for voting");
    }else{
        printf("voter is not eligible for voting");
    }

return 0;
}