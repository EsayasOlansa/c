 #include <stdio.h>
 #include <string.h>

 int main(){
    char name[50]="";

    printf("Enter ur name: ");
    fgets(name, sizeof(name),stdin);
    name[strlen(name) - 1] ='\0';

    if(strlen(name) == 0){
        printf("you're not entered your name");
    }
    else{
        printf("hello %s, WELCOME!", name);
    }

    return 0;
 }