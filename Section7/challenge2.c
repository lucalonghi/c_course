#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    //initialization of random number generator
    srand((unsigned)time(&t));
    //get the random number
    int randomNumber = rand() % 21;

    int tries = 5;
    int guess;

    do{
        printf("You have %d tr%s left\n",tries, tries == 1 ? "y" : "ies");
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if(guess == randomNumber)
            printf("Congratulations. You guessed it!\n");
        else if (guess < 0 || guess > 20){
            printf("The number must be between 0 and 20\n");
            continue;
        }
        else if (guess > randomNumber)
            printf("Sorry, %d is wrong. The number is less then that\n",guess);
        else
            printf("Sorry, %d is wrong. The number is greater then that\n",guess);

        tries--;
    }while((tries > 0) && (guess != randomNumber));

    if(guess != randomNumber)
        printf("Sorry you lost\n");
}