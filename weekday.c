#include <stdio.h>


int main(){
    int hey = 0;
    printf("enter number from(1-7) to see the week day: ");
    scanf("%d",&hey);
    switch(hey){
        case 1:
        printf("Today is Monday");
        break;
        case 2:
        printf("Today is Tuesday");
        break;
        case 3:
        printf("Today is wednesday");
        break;
        case 4:
        printf("Today is Thursday");
        break;
        case 5:
        printf("Today is Friday");
        break;
        case 6:
        printf("Today is Saturday");
        break;
        case 7:
        printf("Today is Sunday");
        break;
        default:
        printf("please sekect from(1-7)");
    }
    return 0;
}