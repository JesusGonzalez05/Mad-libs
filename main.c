#include <stdio.h>
#include <string.h>
// ^ string header

int main (){
    // Mad Libs Game

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective!\n");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1 ] = '\0';
    //^ this will help with the formatting 


    printf("Enter a noun!\n");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1 ] = '\0';


    printf("Enter an adjective!\n");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1 ] = '\0';


    printf("Enter a verb!\n");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1 ] = '\0';


    printf("Enter an adjective!\n");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1 ] = '\0';

    printf("\n--- Your Ad-Lib Love Story ---\n");
    printf("There was once a %s person who felt something was missing in life.\n", adjective1);
    printf("One day, they met a dog that was incredibly %s.\n", adjective2);
    printf("The dog would always %s whenever it saw them, and that changed everything.\n", verb);
    printf("Suddenly, the world seemed %s, and love began to grow.\n", adjective3);
    printf("In the end, the person realized that the %s had stolen their heart forever.\n", noun);

    return 0;
}