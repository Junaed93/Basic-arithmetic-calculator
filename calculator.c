#include <stdio.h>

int main(){
   
    double num1, num2;
    char operator;
    double result;

    printf("Enter the number 1: ");
    scanf("%lf", &num1);

    printf("Enter the number 2: ");
    scanf("%lf", &num2);
    
    printf("Enter an operator (+ - * / ): ");
    scanf(" %c", &operator);

    switch(operator){
       
        case '+': result = num1 + num2;
        printf("Result is %.3lf", result);
        break;

        case '-': result = num1 - num2;
        printf("Result is %.3lf", result);
        break;

        case '*': result = num1 * num2;
        printf("Result is %.3lf", result);
        break;

        case '/': result = num1 / num2;
        printf("Result is %.3lf", result);
        break;
       
        default : printf("Input is not valid");

    }

    return 0;
   
}