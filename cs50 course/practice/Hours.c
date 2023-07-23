#include <stdio.h>
int main(){
    int N;
    int h;
    float sum = 0;
    float avg;
    char opt;

    printf("Number of weeks taking CS50: ");
    scanf("%i", &N);
    int hw[N];

    for(int i=0;i<N;i++){
        printf("Week %i HW hours: ", i);
        scanf("%i", &hw[i]);
    };


    choose:

    printf("Enter T for total hours, A for average hour per week: ");
    scanf(" %c", &opt);

    switch(opt){

        case 'T':
            for(int i=0;i<N;i++){
                sum += hw[i];
            }
            printf("%.2f", sum);
            break;

        case 'A':
            for(int i=0;i<N;i++){
                sum += hw[i];
            }
            avg = sum/N;
            printf("%.2f", avg);
            break;

        default:
            goto choose;
    }

    return 0;

}

