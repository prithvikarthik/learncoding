#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void)
{
    bool digit_seen[N] = {false};
    int occurence[N] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Digits:%7d", 0);

    for (int i = 1; i < N; i++)
    {
      printf("%3d", i);
    }
    printf("\n");

    while (n > 0)
    {
      digit = n % 10;

      switch (digit)
      {
        case 0:
            occurence[digit] += 1;
            break;

        case 1:
            occurence[digit] += 1;
            break;

        case 2:
            occurence[digit] += 1;
            break;
            
        case 3:
            occurence[digit] += 1;
            break;

        case 4:
            occurence[digit] += 1;
            break;

        case 5:
            occurence[digit] += 1;
            break;

        case 6:
            occurence[digit] += 1;
            break;

        case 7:
            occurence[digit] += 1;
            break;

        case 8:
            occurence[digit] += 1;
            break;

        case 9:
            occurence[digit] += 1;
            break;
      }
      n /= 10;
    }

    printf("Occurences:");

    for (int i = 0; i < N; i++)
    {
      printf("%3d", occurence[i]);
    }

    printf("\n");

    return 0;

} 
