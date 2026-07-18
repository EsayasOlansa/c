#include <stdio.h>
#include <stdbool.h>

int main(){
    int scale = 30;
    bool isSunny=false;

    if(scale >= 30 && scale <=0 && isSunny){
        printf("today tempreature is bad but not sunnny");
    }
    else if(scale >= 30 && scale <=0 && !isSunny){
        printf("today tempreature is bad and sunny");
    }
    else{
        if(isSunny){
        printf("the temprature is good  but not sunny");
        }
        if(!isSunny){
        printf("the temprature is good and sunny");
        }
    
    }
    return 0;
}