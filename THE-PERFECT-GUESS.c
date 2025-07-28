#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed_number;
    // Print the random number
    //printf("Random number between 1 and 100: %d\n", random_number);
    void displayAmazingOutcome() {
    printf("\n");
    custom_sleep(200);
    printf("**************************************************\n");
    custom_sleep(200);
    printf("* *\n");
    custom_sleep(200);
    printf("* _   _   _   _   _   _   _   _   _   _   _    *\n");
    custom_sleep(200);
    printf("* / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\   *\n");
    custom_sleep(200);
    printf("* ( C | O | N | G | R | A | T | S | ! | ! | ! )  *\n");
    custom_sleep(200);
    printf("* \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/   *\n");
    custom_sleep(200);
    printf("* *\n");
    custom_sleep(200);
    printf("* Y O U   G U E S S E D   I T !        *\n");
    custom_sleep(200);
    printf("* *\n");
    custom_sleep(200);
    printf("**************************************************\n");
    custom_sleep(500);
    printf("\n");
}
    do
    {
        printf("guess the number");
        scanf("%d",&guessed_number);
        if(guessed_number>random_number){
            printf("lower number please!!\n");
        }else if(guessed_number<random_number){
            printf("higher number please!!\n");
        }else{
            displayAmazingOutcome();
        }
        no_of_guesses++;
    } while (guessed_number!=random_number);
    printf("you guesses the number in %d guesses",no_of_guesses);
    return 0;
}
