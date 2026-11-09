#include <stdio.h>
#include <string.h>

//zadavane na max razmer na masivite
#define MAX 100

int main(){
    char word[MAX]="concatenation";
    char guessed[MAX];
    char input;
    int length=strlen(word);
    int attempts=0;
    int maxAttempts=length+2;
    int found, correctLetters=0;

    //inicializaciq
    for (int i=0;i<length;i++){
        guessed[i]='_';
    }
    guessed[length]='\0'; 
    printf("Game Besenica:");
    printf("The word is with %d letters.", length);
    while(attempts<maxAttempts && correctLetters<length){
        for(int i=0;i<length;i++){
            printf("%c",guessed[i]);
        }

        printf("Enter a letter: ");
        scanf("%c",&input);

        if(input>='A' && input <='Z'){
            input=input + ('a'-'A');
        }
        found=0;

        for(int i=0;i<length;i++){
            if (word[i] ==input && guessed[i]== '_'){
                guessed[i]=input;
                found=1;
                correctLetters++;
            }
        }

        attempts++;

        //if(found){
        //    printf("You guessed!");
       // }
        //else{
        //    printf("You didn't guess!");
        //}

        printf("Attempts: %d/ %d\n", attempts, maxAttempts);
    }

    if(correctLetters=length){
        printf("\n Congratulations!");
    }
    else{
        printf("You lost. The word was: %s", word);
    }

    return 0;
}
