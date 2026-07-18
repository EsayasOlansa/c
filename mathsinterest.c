#include <stdio.h>


int main(){
    float principle = 0.0f;
    float rate= 0.0f;
    float numberofyear = 0.0f;
    float year = 0.0f;
    float amount = 0.0f;

    printf("Compound interest calculator\n");
    printf("****************************\n");
    printf("enter amount of principle: ");
    scanf("%f",&principle);
    printf("enter amount rate: ");
    scanf("%f", &rate);
    printf("enter how much year: ");
    scanf("%f", &numberofyear);
    printf("enter rate is in how much: ");
    scanf("%f", &year);

    amount= principle*(1+ rate/numberofyear)*numberofyear*year;
    printf("amount of interest in %.2f year is %.4f", numberofyear, amount);

    return 0;
}