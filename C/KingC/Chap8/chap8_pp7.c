#include <stdio.h>

#define rows 5
#define columns 5

int main(void)
{
    int total[rows][columns];

    int count = 1;

    for (int i = 0; i < rows; i++)
    {
      printf("Enter row %d: ", i + 1);  
      for (int j = 0; j < columns; j++)
      {
        scanf("%d", &(total[i][j]));
      }
      printf("\n");
    }

    printf("Row totals: ");

    int sumrow = 0;

    for (int i = 0; i < rows; i++)
    {
      sumrow = 0;
      for (int j = 0; j < columns; j++)
      {
        sumrow += total[i][j];
      }
      printf("%d ", sumrow);
    }
    printf("\n");

    printf("Column totals: ");

    int sumcol = 0;

    for (int i = 0; i < columns; i++)
    {
      sumcol = 0;
      for (int j = 0; j < rows; j++)
      {
        sumcol += total[j][i];
      }
      printf("%d ", sumcol);
    }
    printf("\n");

    return 0;

}
