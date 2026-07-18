#include <stdio.h>
#include <stdbool.h>


bool agecheck(int num){
    if(num >= 18){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int age = 21;
    if(agecheck(age)){
        printf("you are above +18 you can sign up");
    }
    else{
        printf("you under +18 u cant sign up");
    }
    return 0;
}