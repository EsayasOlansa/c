#include <stdio.h>
#include <string.h>

int main(){
    char adjectives[50] = "";
    char adverb[50] = "";
    char verb[50] = "";
    char noun[50] = "";

    printf("Enter adjedctives word[to describe class of people]: ");
    fgets(adjectives, sizeof(adjectives),stdin);
    adjectives[strlen(adjectives) - 1] = '\0';
    printf("Enter adverb word[ verb to describe human]: ");
    fgets(adverb, sizeof(adverb), stdin);
    adverb[strlen(adverb) - 1]= '\0';
    printf("Enter verb word[verb that has +ing]: ");
    fgets(verb, sizeof(verb),stdin);
    verb[strlen(verb) - 1 ]= '\0';
    printf("Enter noun word: ");
    fgets(noun, sizeof(noun),stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Billie has %s eyes\n", adjectives);
    printf("Roder is %s learner\n", adverb);
    printf("why all of you %s at my code\n", verb);
    printf("%s is a thing\n", noun);
    printf("%s is %s %s %s", noun, adjectives , verb, adverb);


    return 0;
}