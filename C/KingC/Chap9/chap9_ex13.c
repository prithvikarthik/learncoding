#include <stdio.h>

#define LENGTH 8

int evaluate_position(int n, char board[n][n])
{
    int white, black;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch(board[i][j])
            {
                case 'Q':
                    white += 9;
                    break;
                case 'R':
                    white += 5;
                    break;
                case 'B':
                    white += 3;
                    break;
                case 'N':
                    white += 3;
                    break;
                case 'P':
                    white += 1;
                    break;

                case 'q':
                    black += 9;
                    break;
                case 'r':
                    black += 5;
                    break;
                case 'b':
                    black += 3;
                    break;
                case 'n':
                    black += 3;
                    break;
                case 'p':
                    black += 1;
                    break;

                default:
                    break;
            }
        }
    }

    return white - black;
}

int main(void)
{
    int n = LENGTH;

    char board[8][8] = {{'.', '.', 'b', '.', '.', '.', '.', '.'},
                        {'.', '.', '.', '.', '.', 'r', 'p', '.'},
                        {'.', '.', '.', '.', 'k', '.', '.', '.'},
                        {'.', '.', '.', '.', '.', '.', '.', 'Q'},
                        {'.', '.', '.', '.', 'q', '.', 'p', '.'},
                        {'.', '.', '.', '.', '.', '.', 'n', '.'},
                        {'.', '.', 'B', 'N', '.', '.', '.', '.'},
                        {'.', '.', '.', '.', '.', '.', '.', 'K'}};

    printf("We are having a chess match, \n");

    if (evaluate_position(n, board) < 0)
    {
        printf("and Black has the advantage.\n");
    }
    else if (evaluate_position(n, board) > 0)
    {
        printf("and White has the advantage.\n");
    }
    else
    {
        printf("Both sides have lost equal pieces.\n");
    }

    return 0;

}
