#include <stdio.h>

#define rows 5
#define columns 5

int main(void)
{
    int total[rows][columns];
    float totalscore = 0.0f;
    int i;

    printf("Quiz no.%7d%3d%3d%3d%3d\n\n", 1, 2, 3, 4, 5);

    for (i = 0; i < rows; i++)
    {
        printf("Student no.%d: ", i + 1);

        totalscore = 0;

        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &(total[i][j]));
        }

        for (int n = 0; n < rows; n++)
        {
            totalscore += total[i][n];
        }

        printf("Average score: %1.0f\n", totalscore / 5);
        printf("Total score: %d\n\n", (int)totalscore);

    }

    totalscore = 0;

    int largest = 0;
    int smallest = 0;
    int count = 0;

    for (i = 0; i < columns; i++)
    {
      totalscore = 0;
        for (int j = 0; j < rows; j++)
        {
            totalscore += total[j][i];
        }
        printf("Average score in quiz no.%d: %1.0f\n", count + 1, totalscore / 5);

        for (int score = 0; score < rows; score++)
        {
            if (total[score + 1][i] > total[score][i] && score < 4)
            {
                largest = total[score + 1][i];
            }
            else
            {
                largest = total[score][i];
            }
        }
        printf("Largest score in quiz no.%d: %d\n", count + 1, largest);

        for (int score = 0; score < rows; score++)
        {
            if (total[score + 1][i] < total[score][i] && score < 4)
            {
               smallest = total[score + 1][i];
            }
            else
            {
               smallest = total[score][i];
            }
        }
       printf("Smallest score in quiz no.%d: %d\n\n", count + 1, smallest);

       count++;
    }

return 0;

}
