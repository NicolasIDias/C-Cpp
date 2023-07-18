#include <stdio.h>

int main(){
    int h;

    do{
        printf("Height: ");
        scanf("%i", &h);
    }while(h > 8 || h < 0);

    for(int i=0; i<h;i++){
        for(int j=0; j<=i; j++){
            printf("#");
        }
        printf("\n");
    }

return 0;
}
