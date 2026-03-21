#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void)
{
    bool digit_seen[N] = {false};
    int occurence[10] = {0};
    char c;

    printf("Enter a number: ");

    while ((c = getchar()) != '\n')
    {
      occurence[c - '0'] += 1;
    }

    printf("Digits:%7d", 0);

    for (int i = 1; i < N; i++)
    {
      printf("%3d", i);
    }
    printf("\n");

    printf("Occurences:");

    for (int i = 0; i < N; i++)
    {
      printf("%3d", occurence[i]);
    }

    printf("\n");

    return 0;

} 
