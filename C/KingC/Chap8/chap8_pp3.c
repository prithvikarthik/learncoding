#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void)
{
  bool digit_seen[N] = {false};
  int digit;
  long long n;

  for (int i = 0; i < 100; i++)
  {
    printf("Enter a number(0 to terminate): ");
    scanf("%lld", &n);

    if (n == 0)
    {
      break;
    }

    while (n > 0)
    {
      digit = n % 10;

      if (digit_seen[digit] == true)
      {
        break;
      }
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0)
    {
      printf("Repeated digit\n\n");
    }
    else
    {
      printf("No repeated digit\n\n");
    }
  }

  return 0;

}
