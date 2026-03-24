#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char storeletter;
    int scrabblevalue;

    printf("Enter a word: ");

    storeletter = getchar();

    while (storeletter != '\n')
    {
      scrabblevalue += letter[tolower(storeletter) - 'a'];
      storeletter = getchar();
    }

    printf("the SCRABBLE value of your word is %d\n", scrabblevalue);
    
    return 0;
} 
