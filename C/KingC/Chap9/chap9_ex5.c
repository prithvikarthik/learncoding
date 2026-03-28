#include <stdio.h>

int num_digits(int n)
{
    int count = 0;
    
    while (n != 0)
    {
      n /= 10;
      count += 1;
    }

    return count;
}

int main(void)
{
    int integer;

    printf("Enter a positive integer: ");
    scanf("%d", &integer);

    printf("No. of digits: %d\n", num_digits(integer));

    return 0;

}
