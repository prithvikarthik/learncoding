#include <stdio.h>

#define ELEMENT 10

int largest(int n, int a[n])
{
    int largest = a[0];

    int i = 0;

    while (i < n)
    {
      if (i != n - 1)
      {
        if (a[i] > a[i + 1])
        {
          largest = a[i];
        }
        else
        {
          largest = a[i + 1];
        }
      }
      i++;
    }

    return largest;
}

int average(int n, int a[n])
{
    int sum, i;

    for (i = 0; i < n; i++)
    {
       sum += a[i];
    }

    return sum / n;
}

int positive(int n, int a[n])
{
    int count, i;

    for (i = 0; i < n; i++)
    {
      if (a[i] > 0)
      {
        count += 1;
      }
    }

    return count;
}

int main(void)
{
    int n = ELEMENT;

    int array[n];
    int i;

    for (i = 0; i < n; i++)
    {
      array[i] = i + 1;
    }

    printf("(a)Largest number: %d\n", largest(n, array));
    printf("(b)Average of all elements: %d\n", average(n, array));
    printf("(c)No. of positive elements: %d\n", positive(n, array));
}
