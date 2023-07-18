#include <stdio.h>

int main(){
    int start, end;
    int counter = 0;

    do{
        printf("Start: ");
        scanf("%i", &start);

        printf("End: ");
        scanf("%i", &end);
    }while((start < 9) || (end < start));

    while(start < end){
        start += (start / 3) - (start / 4);
        counter ++;
    }

    printf("Years: %i", counter);

return 0;
}
