#include <stdio.h>

int digit(int n, int k)
{
    int count, modulo;

    for (count = k; count > 0; count--)
    {
      modulo = n % 10;
      n = n / 10;
    }

    return modulo;
}

int main(void)
{
    int which_digit, integer;

    printf("Enter a positive integer: ");
    scanf("%d", &integer);

    printf("From how much from the right do you want to see?(digitwise): ");
    scanf("%d", &which_digit);

    printf("the digit is %d\n", digit(integer, which_digit));

    return 0;

}
