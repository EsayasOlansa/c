#include <stdio.h>
#include <stdbool.h>

int main(){
    float num1=0.0;
    float num2=0.0;
    float result =0.0;
    char operator = '\0';

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter OPERATOR from this( '/' , '+' , '-' , '*' ): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    

    switch(operator){
        case '/':
            result=num1 / num2;
            break;
        case '-':
            result=num1 - num2;
            break;
        
        case '*':
            result=num1 * num2;
            break;
        
        case '+':
            result = num1 + num2;
            break;
    
    }
    printf("result of %.2f %c %.2f is %.4lf",num1,operator,num2,result);
    
    return 0;
}