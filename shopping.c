#include <stdio.h>
#include <string.h>

int main(){
    // shopping 
    char name[50]= "";
    float price =0.0f;
    int quantity=0;
    char cur = '$';
    float total=0.0f;

    printf("which material do you need to buy? ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("how much is price of per in %c? " , cur);
    scanf("%f", &price);
    printf("how many %s do u wanna buy? ",name);
    scanf("%d", &quantity);
    
    total = quantity * price ;
    printf("you bought %d %s by %f%c:",quantity,name , price, cur);


    return 0;
}