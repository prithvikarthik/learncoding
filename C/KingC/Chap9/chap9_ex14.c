#include <stdio.h>
#include <stdbool.h>

#define LENGTH 5

bool has_zero(int n, int a[n])
{
    int i;

    for (i = 0; i < n; i++)
    {
      if (a[i] == 0)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
}

int main(void)
{
    int n = LENGTH;

    int a[5] = {0, 1, 2, 3, 4};

    if (has_zero(n, a))
    {
      printf("There is a zero in the array 'a'.\n");
    }
    else
    {
      printf("There are no zeros in the array 'a'\n");
    }

    return 0;

}
