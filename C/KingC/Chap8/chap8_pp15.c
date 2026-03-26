#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char sentence[80] = {};
    int shiftamount;
    char store, change;

    printf("Enter a message to be encrypted: ");

    store = getchar();

    int i = 0;

    while (store != '?' && store != '.' && store != '!')
    {
      sentence[i] = store;
      i++;

      store = getchar();
    }

    printf("Enter shift amount: ");
    scanf("%d", &shiftamount);

    printf("Encrypted message: ");

    int j;

    for (j = 0; j <= i; j++)
    {
      if (sentence[j] >= 'A' && sentence[j] <= 'Z')
      {
        sentence[j] = ((sentence[j] - 'A') + shiftamount) % 26 + 'A';
      }

      else if (sentence[j] >= 'a' && sentence[j] <= 'z')
      {
        sentence[j] = ((sentence[j] - 'a') + shiftamount) % 26 + 'a';
      }   

      putchar(sentence[j]); 
    }

    printf("%c\n", store);

    return 0;

}    
