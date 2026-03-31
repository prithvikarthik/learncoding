#include <stdio.h>

#define LENGTH 5

void selection_sort(int n, int select[n])
{
    if (n == 0)
    {
      return;
    }

    int largest = select[0];
    int j;

    for (int i = 1; i < n; i++)
    {
      if (select[i] > largest)
      {
        largest = select[i];
        j = i;
      }
    }

    for (; j < n - 1; j++)
    {
      select[j] = select[j + 1];
    }

    select[n - 1] = largest;

    selection_sort(n - 1, select);
    return;
}
int main(void)
{
    int n = LENGTH;

    int select[n];

    printf("Enter 5 numbers: ");

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &select[i]);
    }

    selection_sort(n, select);

    printf("In sorted order: ");

    for (int j = 0; j < n; j++)
    {
      printf("%d ", select[j]);
    }
    printf("\n");

    return 0;

}
