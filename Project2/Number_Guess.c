#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int secret_num = (rand() % 100) + 1;
    printf("\n********************************Number Guessing Game********************************\n");
    printf("Instructions : ");
    printf("1.Number of available attempts : 10\n");
    printf("\t       2.The number is between 1 and 100, excluding both.\n");

    int Guess,diff,diff1;
    int Count = 10;
    int Original = Count;
    char Reattempt;

    while(Count!=0) {
        printf("Enter number to guess : ");
        scanf("%d",&Guess);
        Count--;
        diff = Guess - secret_num;
        if(diff<0)
            diff1 = -diff;

        if((Guess > secret_num) && (diff>=10)) {
            printf("You are far from the number.\n");
            printf("Number of attempts left : %d\n",Count);
        }
        if(Guess > secret_num && diff<=10) {
            printf("You are close to the number.\n");
            printf("Number of attempts left : %d\n",Count);
        }
        if(Guess < secret_num && diff1>=10) {
            printf("You are far from the number.\n");
            printf("Number of attempts left : %d\n",Count);
        }
        if(Guess < secret_num && diff1<=10) {
            printf("You are close to the number.\n");
            printf("Number of attempts left : %d\n",Count);
        }
        if(Guess == secret_num) {
            printf("Congratulations!!\nYou have guessed the number.\n");
            printf("Wanna play the game again [Y/N] : ");
            scanf(" %c",&Reattempt);
            if(Reattempt == 'Y'||Reattempt == 'y') {
                printf("\nWelcome Back\n");
                secret_num = (rand() % 100) + 1;
                Count = Original;
            }
            if(Reattempt == 'N'||Reattempt == 'n') {
                printf("Game Over.\nSee you next time.\n");
                break;
            }
        }
    } 

    if(Count==0) {
        printf("No correect guesses.\nGame End\n");
        printf("The secret number was : %d\n",secret_num);
    }
    return 0;
}