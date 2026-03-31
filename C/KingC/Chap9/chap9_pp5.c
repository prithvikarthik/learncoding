#include <stdio.h>

void create_magic_square(int size, int magicsquare[size][size])
{
    int i, change_row, change_column;
    int row = 0;
    int column = size / 2;

    for (i = 1; i <= size * size; i++)
    {
      magicsquare[row][column] = i;

      if (row == 0)
      {
        row = size - 1;
      }
      if (column == size - 1)
      {
        column = 0;
      }

      if (change_column != size - 1 && change_row == 0)
      {
        column++;
      }
      else if (change_row != 0 && change_column == size - 1) 
      {
        row--;
      }
      else if (change_row != 0 && change_column != size - 1)
      {
        row--;
        column++;
      }

      if (magicsquare[row][column] >= 1 && magicsquare[row][column] <= size * size)
      {
        row = change_row + 1;
        column = change_column;
      }

      change_row = row;
      change_column = column;
    }

    return;
}

void print_magic_square(int size, int magicsquare[size][size])
{ 
    int i, j;

    for (i = 0; i < size; i++)
    {
      for (j = 0; j < size; j++)
      {
        printf("%5d", magicsquare[i][j]);
      }
      printf("\n");
    }

    return;
}

int main(void)
{
    printf("This program creates a magic quare of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    int size;

    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int magicsquare[size][size] = {};

    create_magic_square(size, magicsquare);
    print_magic_square(size, magicsquare);

    return 0;

}
