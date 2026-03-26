#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int word1[26] = {0}; 
    int word2[26] = {0};
    char letter1, letter2;

    printf("Enter first word: ");

    letter1 = getchar();
    
    while (letter1 != '\n')
    {
      word1[toupper(letter1) - 'A'] += 1;
      letter1 = getchar();
    }
    printf("\n");

    printf("Enter second word: ");

    letter2 = getchar();

    while (letter2 != '\n')
    {
      word2[toupper(letter2) - 'A'] += 1;
      letter2 = getchar();
    }

    int i; 

    for (i = 0; i < 26; i++)
    {
      if (word1[i] != word2[i])
      {
        printf("The words are not anagrams.\n");
        return 0;
      }
    }

    printf("The words are anagrams.\n");

    return 0;

}
