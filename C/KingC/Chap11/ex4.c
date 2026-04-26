#include <stdio.h>

int* swap(int *p, int *q)
{
   int temp = *p;
   *p = *q;
   *q = temp;
}

int main(void)
{
   int i = 0, j = 1;

    printf("i = 0, j = 1\n");
    printf("If we swap them, \n");
    swap(&i, &j);
    printf("i = %d, j = %d\n", i, j);

    return 0;

}
