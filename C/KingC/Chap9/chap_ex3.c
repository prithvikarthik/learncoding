#include <stdio.h>

int GCD(int n, int m)
{
   int remainder;

   while (n != 0)
   {
     remainder = m % n;
     m = n;
     n = remainder;
   }

   return m;
}

int main(void)
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    int gcd = GCD(x, y);

    printf("Greatest common divisor: %d\n", gcd);

    return 0;

}
