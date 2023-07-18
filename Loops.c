#include <stdio.h>

int main(){
    int i = 0;
    for(i=0; i<=6; i++){
        printf("For loop index: %d \n", i);
    }
    printf("\nEnd\n\n");

    i=0;
    while(i<=6){
        printf("While loop index: %d \n", i);
        i++;
    }
    printf("\nEnd\n\n");

    i=0;
    do{
        printf("Do while Loop index: %d \n", i);
        i++;
    }while(i<=6);
    printf("\nEnd\n\n");

    return 0;
}
