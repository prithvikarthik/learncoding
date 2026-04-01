#include <stdio.h>

int power(int x, int n)
{
    for (int i = 0; i < n; i++)
    {
      x *= x;
    }

    return x;
}

int compute(int x)
{
    int n5 = 5;
    int power5 = power(x, n5);

    int n4 = 4;
    int power4 = power(x, n4);

    int n3 = 3;
    int power3 = power(x, n3);

    int n2 = 2;
    int power2 = power(x, n2);

    int polynomial = (3 * power5) + (2 * power4) - (5 * power3) - power2 + (7 * x) - 6;

    return polynomial;
}

int main(void)
{
    int x;

    printf("We will give the value of the polynomial,\n");
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n\n");

    printf("Enter a value for x: ");
    scanf("%d", &x);

    printf("The value of the polynomial is %d\n", compute(x));

    return 0;

}
