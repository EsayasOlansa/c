#include <stdio.h>
#include <string.h>

int main(){
    float value= 0.0f;
    float amount = 0.0f;
    int choose = 0;

    printf("CHOOSE FROM THE FF BY THEIR NUMBER\n");
    printf("1. kilogram[kg] to pound[lb]\n");
    printf("2. pound[lb] to kilogram[kg]\n");
    printf("3. pounds[lb] to ounces[oz]\n");
    printf("4. kilogram[lb] to ounces[oz]\n");
    printf("5. ounces[oz] to kilogram[kg]\n");
    printf("6. ounces[oz] to pounds[lb]\n");

    scanf("%d",&choose);
    printf("ENTER AMOUNT: ");
    scanf("%f",&value);

    if(choose==1){
        amount= value*2.2;
        printf("your amount is %flb ", amount);
    }
    else if(choose==2){
        amount= value*0.45;
        printf("your amount is %fkg ", amount);
    }
    else if(choose==3){
        amount= value*16;
        printf("your amount is %foz ", amount);
    }
    else if(choose==4){
        amount= value*35.27;
        printf("your amount is %foz ", amount);
    }
    else if(choose==5){
        amount= value*0.028;
        printf("your amount is %fkg ", amount);
    }
    else if(choose==6){
        amount= value*0.06;
        printf("your amount is %flb ", amount);
    }
    else{
        printf("choose correct choose or enter correct value");
    }



    return 0;
}