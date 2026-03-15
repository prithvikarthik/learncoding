#include <stdio.h>

#define rows 8
#define columns 8

int main(void)
{
     char checker_board[rows][columns];

     for (int i = 0; i < rows; i++)
     {
       for (int j = 0; j < columns; j++)
       {
         if ((i + j) % 2 == 0)
         {
           checker_board[i][j] = 'B';
         }
         else
         {
           checker_board[i][j] = 'R';
         }
         printf("%c ", checker_board[i][j]);
       } 
       printf("\n");
     }

     return 0;
}
