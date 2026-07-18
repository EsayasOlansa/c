#include <stdio.h>
#include <stdbool.h>

int main(){
    float price=10;
    bool isStudent = true;
    bool isSenior = false;

    // student 10%
    // senior  18%

    if(isStudent){
        if(isSenior){
            printf("you get student discount by 10%");
            printf("you get senior discount by 18%");
            price *= 0.1;
            price *= 0.18;

        }
        else{
            printf("you get student discount by 10%");
            prince *= 0.1;
        }
    }
    else{
        if(isSenior){
            printf("you get senior s=discount by 18%");
            price *=0.8;
        }
    }
    printf("The price of ticket is %.2f",price)
    return 0;
}