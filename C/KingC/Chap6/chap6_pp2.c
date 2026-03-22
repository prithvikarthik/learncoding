/*This is Euclid's algorithm*/
#include <stdio.h>

int main(void)
{
	int m, n, GCD;

	printf("Enter two integers: ");
	scanf("%d, %d", &m, &n);

	if (n == 0 || m == 0) {
	  printf("GCD of the numbers cannot be found.");

	}
	while (n != 0) {
	  GCD = m % n;
	  m = n;
	  n = GCD;
	}

	printf("Greatest Common Divisor(GCD): %d\n", m);

	return 0;
}	
