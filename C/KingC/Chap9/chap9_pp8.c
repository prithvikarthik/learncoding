#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);
int random_number(void);

int roll_dice(void)
{
    int dice = random_number() + random_number();
}

int random_number(void)
{
    srand((unsigned) time(NULL));

    return rand() % 6 + 1;
}

int main(void)
{
    int wins = 0, losses = 0;

    char character = 'y';

    while (character == 'y' || character == '\n')
    {
      printf("\n");
        if (play_game())
        {
            printf("YOU WIN!!!!\n\n");
            wins += 1;
        }
        else
        {
            printf("YOU LOSE!!!\n\n");
            losses += 1;
        }

        printf("Play again?(y or n) ");
        character = getchar();

        while (character == '\n')
        {
          character = getchar();
        }
    }
    printf("\n");

    printf("Wins: %d, Losses: %d\n", wins, losses);

    return 0;
}

bool play_game(void)
{
    int point = roll_dice();
    printf("You rolled: %d\n", point);

    int diceroll;

    if (point == 7 || point == 11)
    {
        return true;
    }
    else if (point == 2 || point == 3 || point == 12)
    {
        return false;
    }
    else 
    {
        while ((diceroll = roll_dice()) != 7)
        {
            printf("You rolled: %d\n", diceroll);

            if (diceroll == point)
            {
              return true;
            }
        }
       return false;
    }
}
