#include <stdio.h>

int main(void)
{
    int p;

    printf("Enter a positive integer: ");
    scanf("%d", &p);

    short int factorial = 1;

    for  (int i = 1; i <= p; i++)
    {
      factorial *= i;
    }

    printf("The factorial of your number is %hd\n", factorial);

    return 0;

}
