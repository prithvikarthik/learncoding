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

      occurence[digit] += 1;

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
