#include <stdio.h>

int main(void)
{
	int m, n;

	printf("Enter a positive integer(even if you give an odd number, it will truncate the number you give): ");
	scanf("%d", &m);
	
	for (n = 0; m > 0; n++, m /= 2) {
	  //empty body.
	}

	printf("Your number can be divided by 2, %d times.\n", n);

	return 0;
}
