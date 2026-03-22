#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    int scrabblevalue = 0;

    printf("Enter a word: ");
    letter = getchar();

    while (letter != '\n')
    {
        switch (toupper(letter))
        {
          case 'A':
          case 'E':
          case 'I':  
          case 'L':  
          case 'N':  
          case 'O':  
          case 'R':  
          case 'S':  
          case 'T':  
          case 'U':
          scrabblevalue += 1;
          break;

          case 'D':
          case 'G':
          scrabblevalue += 2;
          break;

          case 'B':
          case 'C':
          case 'M':
          case 'P':
          scrabblevalue += 3;
          break;


          case 'F':
          case 'H':
          case 'V':  
          case 'W':  
          case 'Y':
          scrabblevalue += 4;
          break;

          case 'K':
          scrabblevalue += 5;
          break;

          case 'J':  
          case 'X':  
          scrabblevalue += 8;
          break;

          case 'Q':  
          case 'Z':
          scrabblevalue += 10;
          break;
        } 
       letter = getchar(); 
    }
    printf("the SCRABBLE value of your word is %d\n", scrabblevalue);

    return 0;
} 
