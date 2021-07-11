#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    printf("Enter the first number ");
    //%d is used for integer and %lf is used for doubles
    scanf("%lf", &num1);
    printf("Enter the second number ");
    //%d is used for integer
    scanf("%lf", &num2);
    //and %f for doubles to when we have to pront a final answer
    printf("Answer: %f", num1+num2);

    return 0;
}