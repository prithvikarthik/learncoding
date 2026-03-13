#include <stdio.h>

#define N 7

int main(void)
{
    bool weekend[N] = {false};
    weekend[0] = true;
    weekend[N - 1] = true;

    for (int i = 0; i < N; i++)
    {
      if (weekend[i] == true)
      {
        printf("Day no.%d is a weekend(true)\n", i + 1);
      }
      else
      {
        printf("Day no.%d is a weekend(false)\n", i + 1);
      }    
    }

    return 0;
}
