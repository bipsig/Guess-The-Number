/*This is going to be fun!!  We will write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please.” Similarly, if the user’s guess is too low, the program prints “Higher number please.”

When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX_LIMIT 100

int main()
{
    int num;

    printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ INSTRUCTIONS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf ("\n==================== GUESSING GAME ====================");
    printf ("\n## This is a multi-player game. \n\a\a\a\a\a\a\a## The computer will generate a number randomly between 1 to 100.\n## You make a guess. \n## The computer will indicate whether your guess is higher or lower than the generated number. \n## Now you can change you guessed number. \n## The computer will continue indicating until you guess the correct number. \n## The number of guesses will be noted. \n## The one with the less number of guesses will be the winner.");

    printf ("\n\nEnter the number of players : ");
    scanf ("%d", &num);


    int random [num], guess [num];
    char names [num][MAX_LIMIT];
    int nguess [num];

    srand (time (0));

    for (int i = 0; i < num; i++)
    {
        nguess [i] = 1;
        printf ("\n\n***************************** Welcome Player Number %d *****************************\nPlease state your first name only: ", i+1);
        scanf ("%s", names[i]);

        random[i] = (rand()%100) + 1;

        printf ("\n\nEnter your guessed number, please : ");
        scanf ("%d", &guess[i]);

        while (guess[i] != random[i])
        {
            nguess[i]++;

            if (guess[i] > random[i])
            {
                printf ("Guess is too high. Try a lower number : ");
                scanf ("%d", &guess[i]);
            }

            else
            {
                printf ("\nGuess is too low. Try a higher number : ");
                scanf ("%d", &guess[i]);
            }
        }

        if (i != num - 1)
            printf ("\n$$$$$$$$$$$$$$$$$$$ BINGO $$$$$$$$$$$$$$$$$$$\n\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\aYour Number of Guesses is recorded. Please step aside, so that the next player can play.");

        else
            printf ("\n$$$$$$$$$$$$$$$$$$$ BINGO $$$$$$$$$$$$$$$$$$$\n\n\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*# Here are the results *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#");
    }

    for (int i = 0; i < num-1; i++)
    {
       for (int j = 0; j < num-i-1; j++)
       {
           if (nguess[j] >= nguess[j+1])
           {
               int tmp = nguess [j];
               nguess [j] = nguess [j+1];
               nguess [j+1] = tmp;

                char temp[MAX_LIMIT];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
           }
       }
    }

    printf ("\v");
    for (int i=0; i < num; i++)
    {
        printf ("\nThe Position Number %d goes to %s. The number of guesses he/she took = %d", (i+1), names [i], nguess [i]);
    }

    printf ("\n\nCongratulations to all Winners.\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ THANK YOU FOR PARTICIPATING ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");

}
