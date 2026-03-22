#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char sentence[100];
    char character;
    int i, biff;

    printf("Enter a sentence: ");

     character = getchar();

    for (i = 1; i < 100 && character != '\n'; i++)
    {
       sentence[i] = character;
       character = getchar();
    }

    for (biff = 0; biff < i; biff++)
    {
      sentence[biff] = toupper(sentence[biff]);

      switch (sentence[biff])
      {
          case 'A':
          sentence[biff] = '4';
          break;

          case 'B':
          sentence[biff] = '8';
          break;

          case 'E':
          sentence[biff] = '3';
          break;

          case 'I':
          sentence[biff] = '1';
          break;

          case 'O':
          sentence[biff] = '0';
          break;

          case 'S':
          sentence[biff] = '5';
          break;    
      }
    }

    printf("In BIFF-speak: ");

    for (i = 0; i < biff; i++)
    {
      printf("%c", sentence[i]);
    }    

    printf("!!!!!!!!!!");
    printf("\n");

    return 0;

}

















