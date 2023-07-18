#include <stdio.h>
#include <string>

int main(){
    char c;
    printf("type a letter: ");
    scanf("%c", &c);

    switch(c){
        case 'n':
            printf("The letter is d");
            break;
        case 's':
            printf("The letter is s");
            break;
        default:
            printf("Default: The letter is %c", c);
            break;
    }

    return 0;
}
