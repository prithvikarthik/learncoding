#include <stdio.h>

int factorial(int n)
{
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main(void)
{
    int n;

    printf("Enter the number you want to get the factorial from: ");
    scanf("%d", &n);

    printf("Factorial of the number: %d\n", factorial(n));

    return 0;

}
