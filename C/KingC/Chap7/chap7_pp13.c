#include <stdio.h>

int main(void)
{
    char word;
    float wordlength = 0.0f;
    float count = 0.0f;

    printf("Enter a sentence: ");
    word = getchar();
    count++;

    while (word != '\n')
    {
      if (word == ' ')
      {
        count++;
      }
      else if (word != ' ' || word != '\n')
      {    
        wordlength++;
      }
      word = getchar();
    }

    printf("Average word length: %.1f\n", (float)wordlength/count);

    return 0;

}
