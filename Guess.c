#include <stdio.h>
#include <stdlib.h>   //for rand() and srand()
#include <time.h>     //for time()

int main() {
    int number, guess, attempts = 0;

    srand(time(0));

    number = rand() % 100 + 1;

    printf("===== Number Guessing Game =====\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        }
        else if (guess < number) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("\nCongratulations! You guessed the number.\n");
            printf("The number was %d.\n", number);
            printf("You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != number);
     printf("\nPress Enter to exit...");
    getchar();
    getchar();

    
    return 0;
}