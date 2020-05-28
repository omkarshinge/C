#include<stdio.h>
void main(){
    int num1, num2;
    printf("Enter first number :\t");
    scanf("%d", &num1);
    printf("Enter second number :\t");
    scanf("%d", &num2);
    printf("Addition of entered numbers is :\t%d\n",num1+num2);
    printf("Subtraction of entered numbers is :\t%d\n",num1-num2);
    printf("Multiplication of entered numbers is :\t%d\n",num1*num2);
    printf("Division of entered numbers is :\t%d\n",num1/num2);
}