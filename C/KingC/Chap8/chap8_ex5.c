#include <stdio.h>

#define N 40

int main(void)
{
    int fib_numbers[N] = {[0] = 0, [1] = 1};

    printf("The first 40 fibonacci numbers are,\n %d, %d", fib_numbers[0], fib_numbers[1]);

    for (int i = 2; i < N; i++)
    {
      fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
      printf(" ,%d", fib_numbers[i]);

      if ((i + 1) % 10 == 0)
      {
        printf("\n");
      }
    }

    return 0;
}
