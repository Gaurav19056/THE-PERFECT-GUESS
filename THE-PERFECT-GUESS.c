#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayAmazingOutcome() {
    printf("\n");
    printf("**************************************************\n");
    printf("* *\n");
    printf("* _   _   _   _   _   _   _   _   _   _   _    *\n");
    printf("* / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\   *\n");
    printf("* ( C | O | N | G | R | A | T | S | ! | ! | ! )  *\n");
    printf("* \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/   *\n");
    printf("* *\n");
    printf("* Y O U   G U E S S E D   I T !        *\n");
    printf("* *\n");
    printf("**************************************************\n");
    printf("\n");
}

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed_number;
    // Print the random number
    //printf("Random number between 1 and 100: %d\n", random_number);
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between 1 and 100. Can you guess it?\n\n");
    
    do
    {
        printf("guess the number");
        scanf("%d",&guessed_number);
        if(guessed_number>random_number){
            printf("Too high! Try a lower number.\n");
        }else if(guessed_number<random_number){
            printf("Too low! Try a higher number.\n");
        }else{
            displayAmazingOutcome();
        }
        no_of_guesses++;
    } while (guessed_number!=random_number);
    printf("you guesses the number in %d guesses",no_of_guesses);
    return 0;
}
