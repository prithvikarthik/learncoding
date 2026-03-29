#include <stdio.h>

int factorial(int n)
{
    int fact = 1;    

    if (n == 1)
    {
      return 1;
    }
    else
    {
      for (int i = n; i > 1; i--)
      {
        fact *= i;
      }
    }

    return fact;
}

int main(void)
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial of the number: %d\n", factorial(n));
    
    return 0;

}
