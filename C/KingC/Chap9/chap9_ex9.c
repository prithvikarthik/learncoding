/*Doesn't change or swap both variables(only takes the copies of the variables) */
#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int i = 1;
    int j = 2;
    
    printf("Now,\ni = %d and j = %d\n\n", i, j);

    swap(i, j);

    printf("If we swap them,\n");
    printf("i = %d, j = %d\n", i, j);

    return 0;

}
