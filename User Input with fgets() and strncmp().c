#include <stdio.h>
#include <string.h>

int main(){

    printf("\nProgram start...\n\n");

    char userInput[64];

    while( fgets(userInput, 64, stdin)){
        printf("User input: %s", userInput);
        if( strncmp(userInput, "Nicolas", 7) == 0){
            break;
        }
    }

    printf("\nProgram Quit...");

    return 0;
}
