#include <stdio.h>

#define rows 8
#define columns 8

int main(void)
{
    char chess_board[rows][columns] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
                                       'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
                                       ' ', '.', ' ', '.', ' ', '.', ' ', '.',
                                       '.', ' ', '.', ' ', '.', ' ', '.', ' ',
                                       ' ', '.', ' ', '.', ' ', '.', ' ', '.',
                                       '.', ' ', '.', ' ', '.', ' ', '.', ' ',
                                       'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
                                       'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'};

    int i, j;

     for (i = 0; i < rows; i++)
     {
         for (j = 0; j < columns; j++)
         {
           putchar(chess_board[i][j]);
         }
       printf("\n");  
     }  

     return 0;     
                                       
}
