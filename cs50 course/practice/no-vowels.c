#include <stdio.h>

int main(){

    int wSize = 64;

    char word[wSize];

    printf("Type a word: ");
    scanf("%s", &word);

    for(int i=0;i<wSize;i++){
        if(word[i] == 'A' || word[i] == 'a'){
            word[i] = '4';
        }else if(word[i] == 'E' || word[i] == 'e'){
            word[i] = '3';
        }else if(word[i] == 'I' || word[i] == 'i'){
            word[i] = '1';
        }else if(word[i] == 'O' || word[i] == 'o'){
            word[i] = '0';
        }
    }
    printf("%s",word);



return 0;
}
