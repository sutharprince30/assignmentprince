/*
• Write a C program that implements a simple number guessing game. The program should
generate a random number between 1 and 100, and the user should guess the number
within a limited number of attempts.
• Challenge: Provide hints to the user if the guessed number is too high or too low.
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 7; // Limit to 7 attempts

    // Initialize random number generator
    srand(time(0));  
    randomNumber = (rand() % 100) + 1;  // Random number between 1 and 100

    printf("?? Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it correctly.\n", attempts);
	int i;
    // Loop for user attempts
    for ( i = 1; i <= attempts; i++) {
        printf("\nAttempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("?? Congratulations! You guessed the correct number %d in %d attempts!\n", randomNumber, i);
            return 0; // Exit if guessed correctly
        } 
        else if (guess > randomNumber) {
            printf("?? Too high! Try again.");
        } 
        else {
            printf("?? Too low! Try again.");
        }

        // Last attempt message
        if (i == attempts) {
            printf("\n? Sorry! You've used all %d attempts. The correct number was %d.\n", attempts, randomNumber);
        }
    }

    return 0;
}

