#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIRECTION 4

int main(void)
{
   char dimension[10][10] = {{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
                             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}};

   dimension[0][0] = 'A';

   int row = 0;
   int column = 0;

   int change_row = 0;
   int change_column = 0;

   srand((int) time(NULL));

   int store = rand() % DIRECTION;

   for (char alpha = 'B'; alpha <= 'Z'; alpha++)
   {
     switch (store)
     {
       case 0:
       if (column == 9)
       {
         store = rand() % DIRECTION;
         alpha--;
         continue;
       }
       column++;
       break;

       case 1:
       if (column == 0)
       {
         store = rand() % DIRECTION;
         alpha--;
         continue;
       }
       column--;
       break;

       case 2:
       if (row == 9)
       {
         store = rand() % DIRECTION;
         alpha--;
         continue;
       }
       row++;
       break;

       case 3:
       if (row == 0)
       {
         store = rand() % DIRECTION;
         alpha--;
         continue;
       }
       row--;
       break;
     }

     if (dimension[row][column] != '.')
     {
       row = change_row;
       column = change_column;

       store = rand() % DIRECTION;
       alpha--;
       continue;
     }

     printf("Direction = %d\n", store);

     dimension[row][column] = alpha;

     change_row = row;
     change_column = column;

     store = rand() % DIRECTION;
   }

   int i, j;

   for (i = 0; i < 10; i++)
   {
     for (j = 0; j < 10; j++)
     {
       putchar(dimension[i][j]);
     }
     printf("\n");
   }

   return 0;

}
