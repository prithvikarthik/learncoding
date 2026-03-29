#include <stdio.h>

#define LENGTH 5

double inner_product(int n, double a[n], double b[n])
{
    double product = 0;

    for (int i = 0; i < n; i++)
    {
      product += a[i] * b[i];
    }

    return product;
}

int main(void)
{
    int n = LENGTH;

    double a[n], b[n];

    for (int i = 0; i < n; i++)
    {
      a[i] = (double)i;
      b[i] = (double)i;
    }

    printf("We have 2 arrays, \n");

    printf("their inner product is %1.0lf\n", inner_product(n, a, b));

    return 0;

}
