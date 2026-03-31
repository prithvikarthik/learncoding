#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int word[26])
{
    char letter;
         
    letter = getchar();
    
    while (letter != '\n' && isalpha(letter))
    {
      word[toupper(letter) - 'A'] += 1;
      letter = getchar();
    }

    return;
}

bool equal_array(int word1[26], int word2[26])
{
    for (int i = 0; i < 26; i++)
    {
      if (word1[i] != word2[i])
      {
        return false;
      }
    }

    return true;
}

int main(void)
{
    int word1[26] = {0}; 
    int word2[26] = {0};

    printf("Enter first word: ");
    read_word(word1);

    printf("Enter second word: ");
    read_word(word2);

    if (equal_array(word1, word2) == true)
    {
      printf("The words are anagrams.\n");
    }
    else
    {
      printf("The words are not anagrams.\n");
    }

    return 0;

}
