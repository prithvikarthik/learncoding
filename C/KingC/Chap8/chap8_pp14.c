#include <stdio.h>

int main(void)
{
    char sentence[100] = {' '};
    char punctuation;
    
    printf("Enter a sentence: ");

    punctuation = getchar();

    int i = 0;

    while (punctuation != '?' && punctuation != '.' && punctuation != '!')
    {
      sentence[i] = punctuation;
      i++;

      //printf("i = %d, punctuation = %c\n", i, punctuation);

      punctuation = getchar();
      //printf("punctuation at the end of the loop: %c\n", punctuation);
      //printf("while loop condition check: %d\n", punctuation != '?' && punctuation != '.' && punctuation != '!');
    }

    printf("Reversal of sentence:");

    int j = i - 1;
    int k, word;

    while (j >= 0)
    {
      printf(" ");
        
      k = j;

      while (sentence[j] != ' ' && j != 0)
      {
        j--;
      }
      if (j == 0)
      {
        j--;
      }
      
      for (word = j + 1; word <= k; word++)
      {
        putchar(sentence[word]);
      }

      j--;
    }    

    printf("%c\n", punctuation);

    return 0;

}
