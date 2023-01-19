#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int guess(int N);
int guess(int N)
{

int number, guess, nguesses=0;
    srand(time(0));
    number = rand()%N; // Generates a random number between 1 and 100
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed

    do{
        printf("\nGuess the number : ");
        scanf("%d",&guess);


        if(guess > number)
        {
            printf("Guess a lower number.\n");
        }

         if(guess < number)
        {
            printf("Guess a higher number.\n");
        }

        if(guess == number)
        {
            printf("\nYou guessed the correct number !!\n");
        }
        nguesses++;
    } while(guess != number);

printf("\nNumber of guesses : %d\n",nguesses);
return 0;
}


int main()
{
int N;
printf("Enter range of number to be generated : 1 to ");
scanf("%d",&N);

guess(N);


return 0;
}