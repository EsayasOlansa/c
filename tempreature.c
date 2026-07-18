#include <stdio.h>
#include <string.h>

int main(){
    char choose = '\0';
    float value=0.0f;
    float amount =0.0f;


    printf("TEMPERATURE CALCULATOR\n");
    printf("choose from the following by thier first letter\n");
    printf("F. CELSIUS TO FAHRENHEIT\n");
    printf("C. FAHRENHEIT TO CELSIUS\n");
    scanf("%c",&choose);
    if(choose == 'F'){
        printf("enter degree of celsius: ");
        scanf("%f",&value);
        amount=(value*(9/5))+32;
        printf("your tempreature degree is %f`F",amount);
    }
    else if (choose == 'C'){
        printf("enter degree of fahrenheit: ");
        scanf("%f",&value);
        amount=(value-32)*(5/9);
        printf("your tempeature degree is %f`C",amount);       
    }
    else{
        printf("choose again from C OR F");
    }
    return 0;
}