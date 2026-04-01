#include <stdio.h>

int power(int x, int n)
{
    if (n % 2 == 0 && n != 2)
    {
      return power(power(x, n / 2), 2);
    }
    else if (n == 2)
    {
      return x * x;
    }
    else
    {
      return x * power(x, n - 1);
    }
}

int main(void)
{
    int x, n;

    printf("Enter the base(x): ");
    scanf("%d", &x);

    printf("Enter the exponent(n): ");
    scanf("%d", &n);

    printf("The value of x^n is %d\n", power(x, n));

    return 0;

}
