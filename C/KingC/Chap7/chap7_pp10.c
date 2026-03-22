#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowelcount = 0;
    char letter;

    printf("Give a sentence: ");
    letter = getchar();

    while (letter != '\n')
    {
       switch (toupper(letter))
       {
         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U':
         vowelcount += 1;
         break;
       } 
      letter = getchar(); 
    }

    printf("Your sentence has %d vowels.\n", vowelcount);

    return 0;
}
