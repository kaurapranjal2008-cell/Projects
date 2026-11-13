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
            printf("Congratulations!!\nYou have guessed the number.\nGame Over.\n");
            break;
        }
    }

    if(Count==0)
        printf("No correect guesses.\nGame End");

    return 0;
}