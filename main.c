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
    printf("Enter a noun!\n");
    fgets(adjective2, sizeof(adjective2), stdin);
    printf("Enter an adjective!\n");
    fgets(noun, sizeof(noun), stdin);
    printf("Enter a verb!\n");
    fgets(verb, sizeof(verb), stdin);
    printf("Enter an adjective!\n");
    fgets(adjective3, sizeof(adjective3), stdin);

    return 0;
}